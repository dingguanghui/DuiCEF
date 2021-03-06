// Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
// Mode by Hm.Huang
#ifndef __CEF_UTIL_H__
#define __CEF_UTIL_H__
#pragma once

#include "control/UICefBrowser.h"

typedef CCefBrowserUI CCefUI;

#ifdef _DEBUG
#pragma comment(lib, "libcef/libcef.lib")
#pragma comment(lib, "libcef_dll_wrapper/libcef_dll_wrapper_d.lib")
#else
#pragma comment(lib, "libcef/libcef.lib")
#pragma comment(lib, "libcef_dll_wrapper/libcef_dll_wrapper.lib")
#endif

#endif  // __CEF_UTIL_H__
