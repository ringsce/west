<?php
/*
Plugin Name: My Login Plugin
Description: Custom login functionality for WordPress.
Version: 1.0
Author: Your Name
*/

// Enqueue Vue.js and CSS
function my_login_plugin_scripts() {
    // Enqueue Vue.js
    wp_enqueue_script('vue', 'https://cdn.jsdelivr.net/npm/vue@latest', array(), null, true);

    // Enqueue custom script
    wp_enqueue_script('my-login-plugin-script', plugin_dir_url(__FILE__) . 'js/my-login-plugin.js', array('vue'), '1.0', true);

    // Enqueue CSS
    wp_enqueue_style('my-login-plugin-style', plugin_dir_url(__FILE__) . 'css/my-login-plugin.css', array(), '1.0');

    // Enqueue dashboard script
     wp_enqueue_script('dashboard-script', plugin_dir_url(__FILE__) . 'assets/dashboard/dashboard.js', array('vue'), '1.0', true);

}
add_action('wp_enqueue_scripts', 'my_login_plugin_scripts', 'enqueue_dashboard_scripts');

// Handle login functionality
function my_login_function($user_login, $user) {
    // Your custom login logic here
    // You can perform actions based on the $user object after login
}
add_action('wp_login', 'my_login_function', 10, 2);

// Shortcode for displaying the login form
function my_login_form_shortcode() {
    ob_start();
    include plugin_dir_path(__FILE__) . 'templates/login-form.php';
    return ob_get_clean();
}
add_shortcode('my_login_form', 'my_login_form_shortcode');
