// bitmap.h

#ifndef BITMAP_H_INCLUDED
#define BITMAP_H_INCLUDED
#endif

typedef unsigned char byte;

typedef struct
{
	byte*	data;
	int		width;
	int		height;
} bitmap_t;

#ifdef __cplusplus
extern "C" {
#endif

bitmap_t* _LoadBitmap(const char* filename);
void _FreeBitmap(bitmap_t* bmp);

#ifdef __cplusplus
}
#endif