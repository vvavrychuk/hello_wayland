hello_wayland
=============

A hello world application for wayland

![](/images/hello_wayland_screenshot.png?raw=true)

    This is a wayland hello world application. It uses the wayland
    client library and the wayland protocol to display a window in
    a wayland display server. It sets the cursor icon and receives
    pointer input, exiting the program when clicked, so that it
    is a complete input/output example.
    
    Wayland configuration is verbose, so the code is split into a
    helper module, which does all the job and the main module, which
    describes in a high level each step configuration and operation.

