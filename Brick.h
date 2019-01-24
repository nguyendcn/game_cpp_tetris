#pragma once
#include <iostream>
#include "Define.h"
#include "Console.h"

struct Brick
{
	_Point main_Coordinate;
	_TypeBricks type;
};

void _Br_draw(Brick br);