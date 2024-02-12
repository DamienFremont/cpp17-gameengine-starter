:warning: WORK IN PROGRESS :warning:
====================================

# C++ 17 - Game Engine - Starter

<p align="center">
  <img src="./documentation/thumb-cpp.png" height="175" width="auto" />
</p>

## Content

- [Features](#features)
- [Install](#install)
- [Usage](#usage)
- [Resources](#resources)

---------------------------------------

## Features

- Stack
  - :x: C++17
  - :x: Modularity (Hexagonal Archi.)
  - :x: Standard library (STL, SDL, etc)
- Targets:
  - :x: x86 Windows
  - :x: x86 linux
  - :x: ARMv7 Android
- CI
  - :heavy_check_mark: CMake
  - :x: Code Analysis (Sonar)
  - :x: Unit Test
  - :x: Auto. Documentation

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
cmake -S "projects/all" -B "build"
```

### Linux

:x:

## Usage

### Build everything at once

```bash
# Build
cmake -S "projects/all" -B "build"
```

### Build and run the standalone target

```bash
# Build
cmake -S "projects/hello" -B "build/hello"
cmake --build "build/hello"
# Run
./build/hello/Debug/Hello
```

### Build and run test suite

:x:

### Run clang-format

:x:

### Build the documentation

:x:


## FAQ

### How do I clean my temp files ?

###
```bash
git clean -d -f -x
```

## Resources

- Github
  - [ModernCppStarter](https://github.com/TheLartians/ModernCppStarter/tree/master)
