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

enum _SizeBox { width = 2, height = 1 };

enum _TypeBricks {
	L_up_top_right = 11, L_up_top_left = 19, L_up_bottom_right, L_up_bottom_left,
	L_down_right_top, L_down_right_bottom, L_down_left_top, L_down_left_bottom,
	T_top, T_right, T_bottom, T_left,
	Z_up_right, Z_up_left, Z_down_right, Z_down_left,
	Stick, Square
};