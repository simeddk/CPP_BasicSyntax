#pragma once

#include <Windows.h>
#include <string>
using namespace std;

#include <gdiplus.h>
#pragma comment(lib, "gdiplus.lib")
using namespace Gdiplus;

#include "Systems/Device.h"
#include "Renderer/Renderer.h"

#define SAFE_DELETE(p) { if(p) delete (p); (p) = nullptr;  }

