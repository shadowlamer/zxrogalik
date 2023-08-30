#ifndef __SPRITES_H
#define __SPRITES_H 1

#define SPRITE_HEIGHT 32
#define SPRITE_WIDTH  4

const static char floor1[] =
{/*{w:32,h:32,bpp:1,brev:1,count:2}*/
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x03,0xC0,0x00,0x00,0x0F,0xF0,0x00,0x00,0x3F,0xFC,0x00,0x00,0xFF,0xFF,0x00,
  0x03,0xFF,0xFF,0xC0,0x0F,0xFF,0xFF,0xF0,0x3F,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,0xFF,0xFC,0x0F,0xFF,0xFF,0xF0,0x03,0xFF,0xFF,0xC0,
  0x00,0xFF,0xFF,0x00,0x00,0x3F,0xFC,0x00,0x00,0x0F,0xF0,0x00,0x00,0x03,0xC0,0x00,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0xFC,0x3F,0xFF,0xFF,0xF0,0x0F,0xFF,0xFF,0xC0,0x03,0xFF,0xFF,0x00,0x00,0xFF,
  0xFC,0x00,0x00,0x3F,0xF0,0x00,0x00,0x0F,0xC0,0x00,0x00,0x03,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x03,0xF0,0x00,0x00,0x0F,0xFC,0x00,0x00,0x3F,
  0xFF,0x00,0x00,0xFF,0xFF,0xC0,0x03,0xFF,0xFF,0xF0,0x0F,0xFF,0xFF,0xFC,0x3F,0xFF,
  };


const static char wall1[] =
{/*{w:32,h:32,bpp:1,brev:1,count:2}*/
  0x00,0x03,0xC0,0x00,0x00,0x0E,0xF0,0x00,0x00,0x3D,0x5C,0x00,0x00,0xEA,0xAF,0x00,
  0x03,0xD5,0x55,0xC0,0x0E,0xAA,0xAA,0xF0,0x3D,0x55,0x55,0x5C,0xEA,0xAA,0xAA,0xAF,
  0xF5,0x55,0x55,0x57,0xBA,0xAA,0xAA,0xBD,0x8F,0x55,0x55,0x71,0x83,0xAA,0xAA,0xC1,
  0x80,0xF5,0x57,0x81,0x81,0x3A,0xBC,0x81,0x81,0x0F,0x70,0x81,0xC1,0x83,0xC0,0x41,
  0xE1,0x40,0x80,0x43,0x9A,0x30,0x80,0x4D,0x86,0x0C,0x80,0x71,0x82,0x07,0xF1,0xE1,
  0x81,0x08,0x0E,0x41,0x81,0x08,0x08,0x41,0x81,0xC8,0x08,0x41,0x81,0x38,0x10,0x41,
  0xC2,0x0C,0x20,0x43,0x32,0x03,0xD0,0x4C,0x0C,0x01,0x8C,0xF0,0x03,0x00,0x82,0xC0,
  0x00,0xC0,0x83,0x00,0x00,0x30,0x8C,0x00,0x00,0x0C,0xB0,0x00,0x00,0x03,0xC0,0x00,
  0xFF,0xFC,0x3F,0xFF,0xFF,0xF0,0x0F,0xFF,0xFF,0xC0,0x03,0xFF,0xFF,0x00,0x00,0xFF,
  0xFC,0x00,0x00,0x3F,0xF0,0x00,0x00,0x0F,0xC0,0x00,0x00,0x03,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x03,0xF0,0x00,0x00,0x0F,0xFC,0x00,0x00,0x3F,
  0xFF,0x00,0x00,0xFF,0xFF,0xC0,0x03,0xFF,0xFF,0xF0,0x0F,0xFF,0xFF,0xFC,0x3F,0xFF,
  };


const static char* wall_sprite_set[] = {
  floor1,
  wall1,
};

#endif // __SPRITES.H
