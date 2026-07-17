// portdraw library: embedded graphics for any platform
#ifndef PORTDRAW_H
#define PORTDRAW_H

#include <stdlib.h>
#include <stdint.h>
typedef uint8_t portdraw_size_t;
void portdraw_init();
inline void portdraw_create_framebuffer(portdraw_size_t width, portdraw_size_t height);

struct portdraw_bitmap
{
    const uint16_t data;
    portdraw_size_t width;
    portdraw_size_t height;
    bool flash;
};
struct portdraw_framebuffer {
    uint16_t* data;
    portdraw_size_t width;
    portdraw_size_t height;
};

#endif