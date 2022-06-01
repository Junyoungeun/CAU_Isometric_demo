#pragma once
#define MAX_LEVEL 5
#define MAX_HEIGHT ((BASE_Y+1)*CHUNK_SIZE+1)
#define MAX_WIDTH ((BASE_X+1)*CHUNK_SIZE+1)
#define BASE_Y 10
#define BASE_X 10
#define CHUNK_SIZE 15
#define SCALE 3.0f
#define BLOCK_LIMIT 50

#define PLAYER_SCALE (0.6f*SCALE/2)
#define PLAYER_WIDTH (70*PLAYER_SCALE)
#define PLAYER_HEIGHT (153*PLAYER_SCALE)
#define PLAYER_IMG_CENTER_X (150*PLAYER_SCALE)
#define PLAYER_IMG_CENTER_Y (120*PLAYER_SCALE)
#define PLAYER_BASIC_X (640)
#define PLAYER_X (PLAYER_BASIC_X-PLAYER_IMG_CENTER_X)
#define PLAYER_BASIC_Y (360)
#define PLAYER_Y (PLAYER_BASIC_Y-PLAYER_IMG_CENTER_Y/2)
#define PLAYER_BASIC_SPEED 10

#define BULLET_SCALE 1
#define BULLET_SIZE (16*BULLET_SCALE)
#define BULLET_WIDTH (14*BULLET_SCALE)
#define BULLET_HEIGHT (14*BULLET_SCALE)
#define BULLET_CENTER_X (8*BULLET_SCALE)
#define BULLET_CENTER_Y (8*BULLET_SCALE)

#define TILE_SIZE (50*SCALE/2)
#define TILE_WIDTH (38*SCALE/2)
#define TILE_HEIGHT (23*SCALE/2)
#define TILE_WIDTH_OFFSET_FROM_LEFT (4*SCALE/2)
#define TILE_WIDTH_OFFSET_FROM_RIGHT (5*SCALE/2)
#define TILE_HEIGHT_OFFSET_FROM_DOWN (26*SCALE/2)
#define TILE_HEIGHT_OFFSET_FROM_UP (1*SCALE/2)

#define MAX_NUMBER_OF_BULLET 100
#define MAX_NUMBER_OF_TURRET 2 * BASE_X * BASE_Y

#define PI 3.14159
#define TurretRange 500
#define PlayerRange 500