# latero-gui

Graphical User Interface program that allows the individual testing of the actuators on the Latero device. See [OpenLatero.org](http://OpenLatero.org) for more information.

## Installation

### MacOS

#### Install OpenLatero libraries

Install the [latero](https://github.com/OpenLatero/latero) library.

#### Install dependencies

The dependencies can be installed through [MacPorts](https://www.macports.org) with the following command:

```
sudo port install gtkmm4 +quartz
```

#### Build and run the app

The app can be compiled with the following commands:

```
cmake --preset default
cmake --build build
```

and ran with this command:

```
build/src/latero-gui
```

or in a single command:

```
cmake --preset default && cmake --build build && build/src/latero-gui
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
