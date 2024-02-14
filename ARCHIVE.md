:warning: WORK IN PROGRESS :warning:
====================================

# ARCHIVE

## Install

### Windows

```powershell
# (Windows powershell)

# Dev folder
New-Item -Path "c:\" -Name "dev" -ItemType "directory"

# CMake
# download
Start-BitsTransfer -Source "https://github.com/Kitware/CMake/releases/download/v3.28.3/cmake-3.28.3-windows-x86_64.zip" -Destination "C:\dev\"
# unpack
Expand-Archive "C:\dev\cmake-3.28.3-windows-x86_64.zip" -DestinationPath "C:\dev\"
# set env var
# user
[Environment]::SetEnvironmentVariable("Path", $env:Path + ";" + "C:\dev\cmake-3.28.3-windows-x86_64\bin", "User")
# test
$Env:Path += ';' + "C:\dev\cmake-3.28.3-windows-x86_64\bin"
cmake --version
# output: "cmake version 3.28.3"
```