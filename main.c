#pragma opt_code_speed

#include <string.h>

#include "scr_addr.h"
#include "sprites.h"
#include "map.h"

#define VISIBLE_MAP_SIZE 8

#define ISO_X(x, y) ((y + x) * 2)
#define ISO_Y(x, y) ((y - x + 8) * 8)

char hero_buffer[512];

void pause(unsigned int t);
void draw_sprite(unsigned char x, unsigned char y, char *p_sprite);
void draw_wall_sprite(unsigned char x, unsigned char y);
void fade_in();
void fade_out();

void main() {
  fade_in();
  for (signed char y = 0; y < VISIBLE_MAP_SIZE; y++) {
    for (signed char x = VISIBLE_MAP_SIZE - 1; x >= 0; x--) {
      draw_wall_sprite(x, y);	
    }
  }
  fade_out();
  while(1) {
  }
}

void draw_wall_sprite(unsigned char x, unsigned char y) {
  unsigned char wall = map[y][x];
  char *p_sprite = (char *)wall_sprite_set[wall];
  draw_sprite(ISO_X(x, y), ISO_Y(x, y), p_sprite);
}

void draw_sprite(unsigned char x, unsigned char y, char *p_sprite) {
  char *p_mask = p_sprite + SPRITE_HEIGHT * SPRITE_WIDTH;
  for (unsigned char i = 0; i < SPRITE_HEIGHT; i++) {
    char *p_screen = (char *)(screen_line_addrs[y + i] + x);
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

