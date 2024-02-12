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
- Download the `v3.28.3` release of CMake at http://www.cmake.org/download/.
- Pick Windows (`Windows x64 Installer`).
- Run the installer.
- When asked for, select `Add CMake to the system PATH for all users`.
- Run software installation.

Visual Studio:
- Download the `v17 2022` release of Visual Studio at https://visualstudio.microsoft.com/downloads/
- Run the installer.
- Run software `Visual Studio installer`
- click on `modify` under `Visual Studio 2002`
- select `Universal Windows Platform development`
- click on `modify`

### Linux

:x:

## Usage

### Build and run the standalone target

```bash
cmake -G "Visual Studio 17 2022"

cmake --build . 
cmake --install .
```

### Build and run test suite

:x:

### Run clang-format

:x:

### Build the documentation

:x:

### Build everything at once

:x:

## Resources

- Github
  - [ModernCppStarter](https://github.com/TheLartians/ModernCppStarter/tree/master)
