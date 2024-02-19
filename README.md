:warning: WORK IN PROGRESS
==========================

# C++ 2020 - Monorepo - Starter

<p align="center">
  <img src="./docs/README-thumb-cpp.png" height="175" width="auto" />
</p>

## Content

- [Features](#features)
- [Dependencies](#dependencies)
- [Screenshots](#screenshots)
- [Install](#install)
- [Usage](#usage)
- [Resources](#resources)

---------------------------------------

## Features

- Stack
  - :heavy_check_mark: C++20
  - :heavy_check_mark: Standard libraries
  - :heavy_check_mark: Modularity
- Targets:
  - :x: x86 Windows
  - :x: x86 linux
  - :x: ARMv7 Android
- CI
  - :heavy_check_mark: CMake
  - :x: Formatter
  - :x: Code Analysis (Sonar)
  - :x: Unit Test
  - :x: Auto. Documentation

## Dependencies

- [SDL 2](https://www.libsdl.org/)
- [Miniz](https://github.com/richgel999/miniz)
- [ImGui](https://github.com/ocornut/imgui)

## Screenshots

<p align="center">
  <img src="./docs/README-thumb-screenshot.png" height="175" width="auto" />
</p>

![alt text](./docs/README-diagrams-1.png)

![alt text](./docs/README-diagrams-2.png)

Your monorepo looks very different now:
```
├── assets
│   ├── i18n
│   └── images
├── docs
├── infra
├── lib
│   ├── SDL2
├── platform
│   ├── core
│   ├── server
│   └── desktop
├── standalone
│   ├── desktop_win32_x64
│   └── server_win32_x64
└── tools
```

## Install

### Windows

CMake:
- Download the `v3.28.3` release of `CMake` at http://www.cmake.org/download/.
- Pick Windows (`Windows x64 Installer`).
- Run the installer
- When asked for, select `Add CMake to the system PATH for all users`.
- Run software installation...

Visual Studio:
- Download the `Community` version of `Visual Studio 2022` release of Visual Studio at https://visualstudio.microsoft.com/downloads/
- Run the installer...
- Run software `Visual Studio Installer`
- When asked for, click on `modify` under `Visual Studio 2002`
- Select `Desktop development with C++` (contains MVC package)
- Click on `modify`

PowerShell:
```powershell
cmake -S "." -B "build" -G "Visual Studio 17 2022"
```

VS Code:

.vscode/c_cpp_properties.json:
```json
{
    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**",
                "${workspaceFolder}/platform/core/include",
                "${workspaceFolder}/platform/server/include",
                "${workspaceFolder}/platform/desktop/include"
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "_UNICODE"
            ],
            "windowsSdkVersion": "10.0.22621.0",
            "compilerPath": "cl.exe",
            "cStandard": "c17",
            "cppStandard": "c++20",
            "intelliSenseMode": "windows-msvc-x64"
        }
    ],
    "version": 4
}
```

### Linux

:x:

## Usage

### Build everything at once

```bash
# Build
cmake -S "." -B "build"
cmake --build build

# run standalones
./build/server_win32_x64/Debug/server_win32_x64.exe
./build/desktop_win32_x64/Debug/desktop_win32_x64.exe
```

### Build and run a standalone target

```bash
# Build
cmake -S "standalone/desktop_win32_x64" -B "build/desktop_win32_x64"
cmake --build "build/desktop_win32_x64"
```

### Build and run test suite

:x:

### Run clang-format

:x:

### Build the documentation

:x:

## FAQ

### How do I clean my temp files ?

```bash
git clean -d -f -x
```

## Resources

- Github
  - [ModernCppStarter](https://github.com/TheLartians/ModernCppStarter/tree/master)
- Stackoverflow.com
  - [CMake with include and source paths - basic setup](https://stackoverflow.com/questions/8304190/cmake-with-include-and-source-paths-basic-setup)
- Monorepo examples
  - [How to structure a monorepo](https://lucapette.me/writing/how-to-structure-a-monorepo/?utm_source=atom_feed)
  - [A monorepo template that actually works](https://levelup.gitconnected.com/a-monorepo-template-that-actually-works-3efd87770fa5)
