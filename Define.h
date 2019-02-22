#pragma once

#define __character_dis 219

struct _Point
{
	int x;
	int y;
};

struct _Size
{
	int width;
	int height;
};

enum _Move {Right, Left, Down, Stand};

enum _SizeBox { width = 2, height = 1 };


enum _TypeBricks {
	L_up_top_right = 1, L_up_top_left = 2, L_up_bottom_right = 3, L_up_bottom_left = 4,
	L_down_right_top = 5, L_down_right_bottom = 6, L_down_left_top = 7, L_down_left_bottom = 8,
	T_top = 11, T_right = 12, T_bottom = 13, T_left = 14,
	Z_up_right = 16, Z_up_left = 17, Z_down_right = 18, Z_down_left = 19,
	Stick_up = 21, Stick_down = 22, Square = 30
};