program HUDWithTabs;

{$mode objfpc}

uses
  SysUtils,
  glfw3;

var
  window: PGLFWwindow;

procedure key_callback(window: PGLFWwindow; key, scancode, action, mods: Integer); cdecl;
begin
  if (key = GLFW_KEY_ESCAPE) and (action = GLFW_PRESS) then
    glfwSetWindowShouldClose(window, GLFW_TRUE);
end;

procedure window_size_callback(window: PGLFWwindow; width, height: Integer); cdecl;
begin
  glViewport(0, 0, width, height);
end;

procedure initGUI;
begin
  // Set up tabs, buttons, labels, etc.
end;

procedure render;
begin
  // Render the current tab
end;

begin
  // Initialize GLFW
  if not glfwInit() then
  begin
    WriteLn('Failed to initialize GLFW');
    Halt;
  end;

  // Create a windowed mode window and its OpenGL context
  window := glfwCreateWindow(800, 600, 'HUD with Tabs', nil, nil);
  if not window then
  begin
    WriteLn('Failed to create GLFW window');
    glfwTerminate;
    Halt;
  end;

  // Make the window's context current
  glfwMakeContextCurrent(window);

  // Set key callback
  glfwSetKeyCallback(window, @key_callback);

  // Set window size callback
  glfwSetWindowSizeCallback(window, @window_size_callback);

  // Initialize GUI components (e.g., tabs, buttons, labels)
  initGUI;

  // Loop until the user closes the window
  while not glfwWindowShouldClose(window) do
  begin
    // Render here
    glClear(GL_COLOR_BUFFER_BIT);

    render;

    // Swap front and back buffers
    glfwSwapBuffers(window);

    // Poll for and process events
    glfwPollEvents;
  end;

  // Terminate GLFW
  glfwTerminate;
end.
