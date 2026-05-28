# latero-gui

Graphical User Interface program that allows the individual testing of the actuators on the Latero device. See [OpenLatero.org](http://OpenLatero.org) for more information.

## Installation

The software for the Latero device is divided into libraries and programs. The latero-gui program (this project) is a simple Graphical User Interface that makes it possible to control the position of each piezo-actuator individually. This program makes use of the latero library.

This release of the sofware has been tested on Mac OS X Maverick and Yosemite. Please follow these instructions. If you've successfully built and run this software on another platform, please list the steps you followed below.

### MacOS

Tested on MacOS Tahoe 26.3.1.

Install the latero library.

Install dependencies:
```
sudo port install gtkmm4 +quartz
```

Build the app:
```
cmake --preset default
cmake --build build
```

Run the app:
```
build/src/latero-gui
```

### Cygwin

**Step 0: Make sure the latero library is installed**

See instructions in INSTALL file for latero project.

**Step 1: Install X window package**

See https://x.cygwin.com/docs/ug/setup.html and follow the instructions.

**Step 2: Build latero-gui**
```
cmake .
make
make install
```

After you build the program, there is `latero-gui.exe` at `./src/Debug/`.

**Step 3: How to run latero-gui.exe**

You can't run from Cygwin terminal normally, so follow these instructions:

1. Run Xwin Server from Windows start menu
2. Click the Cygwin icon from System tray (bottom right) → System tools → Cygwin terminal
3. Run:
```
cd {path to directory with latero-gui.exe}
./latero-gui.exe
```

## Authors

Vincent Levesque <vleves@cim.mcgill.ca>
