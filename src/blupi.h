#pragma once

#include <SDL2/SDL.h>
#include <libintl.h>

extern SDL_Window *g_window;
extern SDL_Renderer *g_renderer;

struct POINT
{
	Sint32 x;
	Sint32 y;
};

struct RECT
{
	Sint32 left;
	Sint32 top;
	Sint32 right;
	Sint32 bottom;
};

typedef Uint32 COLORREF;

#if defined(_WIN64)
typedef unsigned __int64 WPARAM;
typedef __int64 LPARAM;
#else
typedef Uint32 WPARAM;
typedef Sint32 LPARAM;
#endif

#define LOWORD(l)           ((Uint16)(((Uint32)(l)) & 0xffff))
#define HIWORD(l)           ((Uint16)((((Uint32)(l)) >> 16) & 0xffff))

#define MAX_PATH 260

#define VK_END            0x23
#define VK_LEFT           0x25
#define VK_UP             0x26
#define VK_RIGHT          0x27
#define VK_DOWN           0x28

#define WM_KEYDOWN                      0x0100
#define WM_KEYUP                        0x0101
#define WM_MOUSEMOVE                    0x0200
#define WM_LBUTTONDOWN                  0x0201
#define WM_LBUTTONUP                    0x0202
#define WM_RBUTTONDOWN                  0x0204
#define WM_RBUTTONUP                    0x0205