<?php
// Load WordPress
require_once( dirname( __FILE__ ) . '/wp-load.php' );

// Now you can use WordPress functions and access the database
global $wpdb;

// Example: Fetch posts from the database
$posts = $wpdb->get_results( "SELECT * FROM $wpdb->posts WHERE post_type = 'post' AND post_status = 'publish'" );

// Example: Display the post titles
foreach ( $posts as $post ) {
    echo $post->post_title . '<br>';
}
?>
