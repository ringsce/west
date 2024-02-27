function my_plugin_menu_page() {
    add_menu_page('My Plugin Dashboard', 'Dashboard', 'manage_options', 'my-plugin-dashboard', 'render_dashboard_page');
}
add_action('admin_menu', 'my_plugin_menu_page');

function render_dashboard_page() {
    echo '<div id="dashboard-app"></div>';
}
