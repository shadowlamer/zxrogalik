#pragma opt_code_speed

#include <string.h>

#include "scr_addr.h"
#include "sprites.h"
#include "map.h"

void pause(unsigned int t);
void draw_wall_sprite(unsigned char x, unsigned char y, char *p_sprite);
void fade_in();
void fade_out();

void main() {
  fade_in();
  for (unsigned char y = 0; y < 8; y++) {
    for (unsigned char x = 0; x < 8; x++) {
      unsigned char wall = map[y][x];
      draw_wall_sprite(8 - x, y, (char *)wall_sprite_set[wall]);	
    }
  }
  fade_out();
  while(1);
}

void draw_wall_sprite(unsigned char x, unsigned char y, char *p_sprite) {
  char *p_mask = p_sprite + SPRITE_HEIGHT * SPRITE_WIDTH;
  unsigned char iso_x = (x + y - 1) * 2;
  unsigned char iso_y = (y - x + 8) * 8;  
  for (unsigned char i = 0; i < SPRITE_HEIGHT; i++) {
    char *p_screen = (char *)(screen_line_addrs[iso_y + i] + iso_x);
    for (unsigned char j = 0; j < SPRITE_WIDTH; j++) {
    *p_screen = (*p_screen++ & *p_mask++) | *p_sprite++;
    }
  }
}

void pause(unsigned int t) {
  for (;t > 0; t--) {
    __asm 
      ei 
      halt
    __endasm;
  }
}

void fade_in(){
  memset(screen_attr_buf, 0x00, ATTR_SCREEN_BUFFER_SIZE);
}

void fade_out(){
  memset(screen_attr_buf, 0x07, ATTR_SCREEN_BUFFER_SIZE);
}

