#include "Brick.h"

void dis_box(_Point p)
{
	p.y--; 
	for (int i = 0; i < _SizeBox::height; i++)
	{
		p.y++;
		_Co_gotoxy(p);
		for (int j = 0; j < _SizeBox::width; j++)
		{
			std::cout << (char)__character_dis;
		}
	}
}

void dis_L(_TypeBricks tp)
{
	
}

void _Br_draw(Brick br)
{
	if (br.type == _TypeBricks::L_down_left_bottom)
	{
		_Point mc_temp = br.main_Coordinate;
		_Co_gotoxy(mc_temp); 
		dis_box(mc_temp);
		mc_temp.y--;
		_Co_gotoxy(mc_temp);
		for (int i = 0; i < 3; i++)
		{
			dis_box(mc_temp);
			mc_temp.x += _SizeBox::width;
		}
	}
	else if (br.type == _TypeBricks::L_down_left_top)
	{
		_Point mc_temp = br.main_Coordinate;
		_Co_gotoxy(mc_temp);
		dis_box(mc_temp);
		mc_temp.y++;
		_Co_gotoxy(mc_temp);
		for (int i = 0; i < 3; i++)
		{
			dis_box(mc_temp);
			mc_temp.x += _SizeBox::width;
		}
	}
	else if (br.type == _TypeBricks::L_down_right_bottom)
	{
		_Point mc_temp = br.main_Coordinate;
		_Co_gotoxy(mc_temp);
		dis_box(mc_temp);
		mc_temp.y--;
		_Co_gotoxy(mc_temp);
		for (int i = 0; i < 3; i++)
		{
			dis_box(mc_temp);
			mc_temp.x -= _SizeBox::width;
		}
	}
	else if (br.type == _TypeBricks::L_down_right_top)
	{
		_Point mc_temp = br.main_Coordinate;
		_Co_gotoxy(mc_temp);
		dis_box(mc_temp);
		mc_temp.y++;
		_Co_gotoxy(mc_temp);
		for (int i = 0; i < 3; i++)
		{
			dis_box(mc_temp);
			mc_temp.x -= _SizeBox::width;
		}
	}
}