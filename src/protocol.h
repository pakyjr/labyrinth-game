#pragma once

#include <stdint.h>

#define PORT 8080
#define MAX_CLIENTS 10
#define NICKNAME_MAX 32
#define BUFFER_SIZE 4096
// #define MAP_WIDTH ?
// #define MAP_HEIGHT ?
// #define VIEW_RADIUS ?
#define T_INTERVAL 5

#define CELL_WALL '#'
#define CELL_EMPTY ' '
#define CELL_OBJ '*'
#define CELL_EXIT 'E'
#define CELL_PLAYER 'P'
#define CELL_HIDDEN '?'

typedef enum {
  MSG_HELLO       = 0x01,
  MSG_MOVE        = 0x02,
  MSG_MAP_LOCAL   = 0x03,
  MSG_MAP_GLOBAL  = 0x04,
  MSG_ERROR       = 0x05,
  MSG_OK          = 0x06,
  MSG_PLAYERS     = 0x07,
  MSG_QUIT        = 0x08,
  MSG_OBJECT      = 0x09,
  MSG_EXIT_FOUND  = 0x0A,
} message_t;

typedef struct {
  uint8_t type;
  uint16_t payload_len;
} __attribute__((packed)) msg_header_t;
