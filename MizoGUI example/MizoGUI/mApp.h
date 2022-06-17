// mApp.h

#ifdef __cplusplus
extern "C" {
#endif

#ifndef BITMAP_H_INCLUDED
#include "bitmap.h"
#endif

int		mApp_Init(const char* title, int width, int height);
void	mApp_SetFrameCallback(void(*frame_callback)(void));
void	mApp_MainLoop();
void	mApp_Shutdown();
int		mApp_Button(int x, int y, const char* text);
int		mApp_TextField(int x, int y, int w, int h, char* text, int lose_focus_if_full);
void	mApp_Text(int x, int y, const char* text);
int		mApp_ClickableText(int x, int y, const char* text);
void	mApp_Bitmap(bitmap_t* bmp, int x, int y, unsigned char ck_r, unsigned char ck_g, unsigned char ck_b);

#ifdef __cplusplus
}
#endif
