#pragma once
#include <d2d1.h>
#include <dwmapi.h>
#include <dwrite.h>
#include <windows.h>

inline ID2D1Factory *pD2DFactory = nullptr;
inline ID2D1HwndRenderTarget *pRenderTarget = nullptr;
inline ID2D1SolidColorBrush *pBrush = nullptr;
inline IDWriteFactory *pDWriteFactory = nullptr;
inline IDWriteTextFormat *pTextFormat = nullptr;