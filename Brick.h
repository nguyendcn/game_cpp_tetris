#pragma once
#include <iostream>
#include "Define.h"
#include "Console.h"

struct Brick
{
	_Point main_Coordinate;
	_Point old_Coor;
	_TypeBricks type;
	_Move dir;
};

void _Br_draw(Brick br);
void _Br_eraseOld(Brick br);