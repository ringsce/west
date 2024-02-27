<?php
// backend.php

header("Access-Control-Allow-Origin: *");
header("Content-Type: application/json; charset=UTF-8");

// Include WordPress environment
require_once('wp-load.php');

global $wpdb;
$table_name = $wpdb->prefix . 'users';

// Retrieve user input from the request (for demonstration purposes)
$user_id = $_GET['user_id']; // Example user input

// Prepare the SQL statement with placeholders
$sql = $wpdb->prepare(
    "SELECT * FROM $table_name WHERE user_id = %d",
    $user_id
);

// Execute the prepared statement
$results = $wpdb->get_results($sql);

// Check if any results were returned
if ($results) {
    // Send the results as JSON response
    echo json_encode($results);
} else {
    // No results found
    echo json_encode(array('message' => 'No results found'));
}
