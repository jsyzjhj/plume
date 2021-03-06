// header.h : 标准系统包含文件的包含文件，或是经常使用但不常更改的特定于项目的包含文件

#pragma once

#define _CRT_SECURE_NO_WARNINGS

// Importing basic C/C++ runtime support
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

// Importing HP-Socket
#define HPSOCKET_STATIC_LIB
#include "../HP-Socket/Include/HPSocket/HPSocket4C-SSL.h"
#pragma comment(lib, "../HPSocket4C.lib")

// Importing nlog
#define NLOG_STATIC_LIB
#include "nlog/include/nlog.h"
#pragma comment(lib, "../nloglib.lib")

// Importing headers
#include "constants.h"
#include "CStringPlus.h"
#include "CFileOperation.h"

// Importing Windows platform SDK
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <Shlwapi.h>

#define MAX_BUFF 10240
