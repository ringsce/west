<?php
// Allow CORS (Cross-Origin Resource Sharing)
header("Access-Control-Allow-Origin: *");
header("Access-Control-Allow-Headers: *");

// Include the interpreter
require_once 'interpreter.php';

// Check if the request method is POST
if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    // Get the POST data
    $data = json_decode(file_get_contents('php://input'), true);

    // Check if the 'code' key exists in the POST data
    if (isset($data['code'])) {
        $code = $data['code'];

        // Instantiate the interpreter
        $interpreter = new PascalInterpreter();

        // Interpret the Pascal code
        $output = $interpreter->interpret($code);

        // Return the output as JSON
        echo json_encode(['output' => $output]);
    } else {
        // Return an error if 'code' key is not provided
        http_response_code(400);
        echo json_encode(['error' => 'Pascal code not provided']);
    }
} else {
    // Return an error if the request method is not POST
    http_response_code(405);
    echo json_encode(['error' => 'Method Not Allowed']);
}
?>
