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

void dis_eraseBox(_Point p)
{
	p.y--;
	for (int i = 0; i < _SizeBox::height; i++)
	{
		p.y++;
		_Co_gotoxy(p);
		for (int j = 0; j < _SizeBox::width; j++)
		{
			std::cout << " ";
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
	else if (br.type == _TypeBricks::L_up_bottom_left)
	{
		_Point mc_temp = br.main_Coordinate;
		_Co_gotoxy(mc_temp);
		dis_box(mc_temp);
		mc_temp.x += _SizeBox::width;
		_Co_gotoxy(mc_temp);
		for (int i = 0; i < 3; i++)
		{
			dis_box(mc_temp);
			mc_temp.y -= _SizeBox::height;
		}
	}
	else if (br.type == _TypeBricks::L_up_bottom_right)
	{
		_Point mc_temp = br.main_Coordinate;
		_Co_gotoxy(mc_temp);
		dis_box(mc_temp);
		mc_temp.x -= _SizeBox::width;
		_Co_gotoxy(mc_temp);
		for (int i = 0; i < 3; i++)
		{
			dis_box(mc_temp);
			mc_temp.y -= _SizeBox::height;
		}
	}
	else if (br.type == _TypeBricks::L_up_top_left)
	{
		_Point mc_temp = br.main_Coordinate;
		_Co_gotoxy(mc_temp);
		dis_box(mc_temp);
		mc_temp.x += _SizeBox::width;
		_Co_gotoxy(mc_temp);
		for (int i = 0; i < 3; i++)
		{
			dis_box(mc_temp);
			mc_temp.y += _SizeBox::height;
		}
	}
	else if (br.type == _TypeBricks::L_up_top_right)
	{
		_Point mc_temp = br.main_Coordinate;
		_Co_gotoxy(mc_temp);
		dis_box(mc_temp);
		mc_temp.x -= _SizeBox::width;
		_Co_gotoxy(mc_temp);
		for (int i = 0; i < 3; i++)
		{
			dis_box(mc_temp);
			mc_temp.y += _SizeBox::height;
		}
	}
	else if (br.type == _TypeBricks::T_top)
	{
		_Point mc_temp = br.main_Coordinate;
		_Co_gotoxy(mc_temp);
		dis_box(mc_temp);

		mc_temp = { br.main_Coordinate.x - _SizeBox::width, br.main_Coordinate.y + _SizeBox::height };
		for (int i = 0; i < 3; i++)
		{
			_Co_gotoxy(mc_temp);
			dis_box(mc_temp);

			mc_temp.x += _SizeBox::width;
		}
	}
	else if (br.type == _TypeBricks::T_bottom)
	{
		_Point mc_temp = br.main_Coordinate;
		_Co_gotoxy(mc_temp);
		dis_box(mc_temp);

		mc_temp = { br.main_Coordinate.x - _SizeBox::width, br.main_Coordinate.y - _SizeBox::height };
		for (int i = 0; i < 3; i++)
		{
			_Co_gotoxy(mc_temp);
			dis_box(mc_temp);

			mc_temp.x += _SizeBox::width;
		}
	}
	else if (br.type == _TypeBricks::T_left)
	{
		_Point mc_temp = br.main_Coordinate;
		_Co_gotoxy(mc_temp);
		dis_box(mc_temp);

		mc_temp = { br.main_Coordinate.x + _SizeBox::width, br.main_Coordinate.y - _SizeBox::height };
		for (int i = 0; i < 3; i++)
		{
			_Co_gotoxy(mc_temp);
			dis_box(mc_temp);

			mc_temp.y += _SizeBox::height;
		}
	}
	else if (br.type == _TypeBricks::T_right)
	{
		_Point mc_temp = br.main_Coordinate;
		_Co_gotoxy(mc_temp);
		dis_box(mc_temp);

		mc_temp = { br.main_Coordinate.x - _SizeBox::width, br.main_Coordinate.y - _SizeBox::height };
		for (int i = 0; i < 3; i++)
		{
			_Co_gotoxy(mc_temp);
			dis_box(mc_temp);

			mc_temp.y += _SizeBox::height;
		}
	}
	else if (br.type == _TypeBricks::Z_down_left)
	{
		_Point mc_temp = br.main_Coordinate;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				_Co_gotoxy(mc_temp);
				dis_box(mc_temp);
				mc_temp.x += _SizeBox::width;
			}
			mc_temp = { br.main_Coordinate.x + _SizeBox::width , br.main_Coordinate.y + _SizeBox::height };
		}
	}
	else if (br.type == _TypeBricks::Z_down_right)
	{
		_Point mc_temp = br.main_Coordinate;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				_Co_gotoxy(mc_temp);
				dis_box(mc_temp);
				mc_temp.x -= _SizeBox::width;
			}
			mc_temp = { br.main_Coordinate.x - _SizeBox::width , br.main_Coordinate.y + _SizeBox::height };
		}
	}
	else if (br.type == _TypeBricks::Z_up_left)
	{
		_Point mc_temp = br.main_Coordinate;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				_Co_gotoxy(mc_temp);
				dis_box(mc_temp);
				mc_temp.y += _SizeBox::height;
			}
			mc_temp = { br.main_Coordinate.x + _SizeBox::width , br.main_Coordinate.y + _SizeBox::height };
		}
	}
	else if (br.type == _TypeBricks::Z_up_right)
	{
		_Point mc_temp = br.main_Coordinate;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				_Co_gotoxy(mc_temp);
				dis_box(mc_temp);
				mc_temp.y += _SizeBox::height;
			}
			mc_temp = { br.main_Coordinate.x - _SizeBox::width , br.main_Coordinate.y + _SizeBox::height };
		}
	}
	else if (br.type == _TypeBricks::Square)
	{
		_Point mc_temp = br.main_Coordinate;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				_Co_gotoxy(mc_temp);
				dis_box(mc_temp);
				mc_temp.x += _SizeBox::width;
			}
			mc_temp = { br.main_Coordinate.x, br.main_Coordinate.y + _SizeBox::height };
		}
	}
	else if (br.type == _TypeBricks::Stick_up)
	{
		_Point mc_temp = br.main_Coordinate;
		for (int i = 0; i < 4; i++)
		{
			_Co_gotoxy(mc_temp);
			dis_box(mc_temp);
			mc_temp.y += _SizeBox::height;
		}
	}
	else if (br.type == _TypeBricks::Stick_down)
	{
		_Point mc_temp = br.main_Coordinate;
		for (int i = 0; i < 4; i++)
		{
			dis_box(mc_temp);
			mc_temp.x += _SizeBox::width;
		}
	}
}

void _Br_eraseOld(Brick br)
{
	if (br.dir == _Move::Down)
	{
		if (br.type > 0 && br.type < 10) //L
		{
			if (br.type == _TypeBricks::L_down_left_bottom || br.type == _TypeBricks::L_down_right_bottom)
			{
				_Point lc_temp = br.old_Coor;
				lc_temp.y--;
				for (int i = 0; i < 3; i++)
				{
					dis_eraseBox(lc_temp);
					if (br.type == _TypeBricks::L_down_right_bottom)
					{
						lc_temp.x -= _SizeBox::width;
					}
					else
					{
						lc_temp.x += _SizeBox::width;
					}
				}
			}
			else if (br.type == _TypeBricks::L_down_left_top || br.type == _TypeBricks::L_down_right_top)
			{
				_Point lc_temp = br.old_Coor;
				dis_eraseBox(br.old_Coor);

				lc_temp = { (br.type == _TypeBricks::L_down_left_top) ? (br.old_Coor.x + _SizeBox::width) : (br.old_Coor.x - _SizeBox::width)
					, br.old_Coor.y + _SizeBox::height }; //set next location will be erase
				for (int i = 0; i < 2; i++) //erase two boxs;
				{
					dis_eraseBox(lc_temp);
					if (br.type == _TypeBricks::L_down_right_top)
					{
						lc_temp.x -= _SizeBox::width;
					}
					else
					{
						lc_temp.x += _SizeBox::width;
					}
				}
			}
			else if (br.type == _TypeBricks::L_up_top_left || br.type == _TypeBricks::L_up_top_right)
			{
				_Point lc_temp = br.old_Coor;

				for (int i = 0; i < 2; i++)
				{
					dis_eraseBox(lc_temp);
					if (br.type == _TypeBricks::L_up_top_left)
					{
						lc_temp.x += _SizeBox::width;
					}
					else
					{
						lc_temp.x -= _SizeBox::width;
					}
				}
			}
			else if (br.type == _TypeBricks::L_up_bottom_left || br.type == _TypeBricks::L_up_bottom_right)
			{
				_Point mc_temp = br.old_Coor;
				dis_eraseBox(mc_temp);

				if (br.type == _TypeBricks::L_up_bottom_left)
				{
					mc_temp = { br.old_Coor.x + _SizeBox::width, br.old_Coor.y - (2 * _SizeBox::height) };
				}
				else
				{
					mc_temp = { br.old_Coor.x - _SizeBox::width, br.old_Coor.y - (2 * _SizeBox::height) };
				}
				dis_eraseBox(mc_temp);
			}
		}
		else if (br.type > 10 && br.type < 15) // T
		{
			_Point lc_temp = br.old_Coor;
			if (br.type == _TypeBricks::T_bottom)
			{
				lc_temp = { br.old_Coor.x - _SizeBox::width, br.old_Coor.y - _SizeBox::height };
				for (int i = 0; i < 3; i++)
				{
					dis_eraseBox(lc_temp);
					lc_temp.x += _SizeBox::width;
				}
			}
			else if (br.type == _TypeBricks::T_top)
			{
				dis_eraseBox(lc_temp);
				
				lc_temp = { br.old_Coor.x - _SizeBox::width, br.old_Coor.y + _SizeBox::height };
				dis_eraseBox(lc_temp);

				lc_temp = { br.old_Coor.x + _SizeBox::width, br.old_Coor.y + _SizeBox::height };
				dis_eraseBox(lc_temp);
			}
			else if (br.type == _TypeBricks::T_left || br.type == _TypeBricks::T_right)
			{
				dis_eraseBox(lc_temp);
				lc_temp = { (br.type == _TypeBricks::T_left) ? (br.old_Coor.x + _SizeBox::width) : (br.old_Coor.x - _SizeBox::width)
					, br.old_Coor.y - _SizeBox::height };
				dis_eraseBox(lc_temp);
			}
		}
		else if (br.type > 15 && br.type < 20) // Z
		{
			_Point lc_temp = br.old_Coor;
			if (br.type == _TypeBricks::Z_down_left || br.type == _TypeBricks::Z_down_right)
			{
				for (int i = 0; i < 2; i++)
				{
					dis_eraseBox(lc_temp);
					lc_temp = { (br.type == _TypeBricks::Z_down_left) ? (br.old_Coor.x + _SizeBox::width) : (br.old_Coor.x - _SizeBox::width)
						, br.old_Coor.y};
				}

				lc_temp = { (br.type == _TypeBricks::Z_down_left) ? (br.old_Coor.x + 2 * _SizeBox::width) : (br.old_Coor.x - 2 *_SizeBox::width)
					, br.old_Coor.y + _SizeBox::height};

				dis_eraseBox(lc_temp);
			}
			else if (br.type == _TypeBricks::Z_up_left || br.type == _TypeBricks::Z_up_right)
			{
				dis_eraseBox(lc_temp);
				lc_temp = { (br.type == _TypeBricks::Z_up_left) ? (br.old_Coor.x + _SizeBox::width) : (br.old_Coor.x - _SizeBox::width)
					, br.old_Coor.y + _SizeBox::height };
				dis_eraseBox((lc_temp));
			}
		}
		else if (br.type > 20 && br.type < 23) //Stick
		{
			_Point lc_temp = br.old_Coor;
			if (br.type == _TypeBricks::Stick_down)
			{
				for (int i = 0; i < 4; i++)
				{
					dis_eraseBox(lc_temp);
					lc_temp.x += _SizeBox::width;
				}
			}
			else if (br.type == _TypeBricks::Stick_up)
			{
				_Point lc_temp = br.old_Coor;
				dis_eraseBox(lc_temp);
			}
		}
		else if (br.type == 30) // square
		{
			_Point lc_temp = br.old_Coor;
			for (int i = 0; i < 2; i++)
			{
				dis_eraseBox(lc_temp);
				lc_temp.x = br.old_Coor.x + _SizeBox::width;
			}
		}
		
	}
	else if (br.dir == _Move::Left)
	{
		if (br.type > 0 && br.type < 10)// L
		{
			if (br.type == _TypeBricks::L_down_left_bottom)
			{

			}
			else if (br.type == _TypeBricks::L_down_left_top)
			{

			}
			else if (br.type == _TypeBricks::L_down_right_bottom || br.type == _TypeBricks::L_down_right_top)
			{

			}
			else if (br.type == _TypeBricks::L_up_bottom_left || br.type == _TypeBricks::L_up_top_left)
			{

			}
			else if (br.type == _TypeBricks::L_up_bottom_right)
			{

			}
			else if (br.type == _TypeBricks::L_up_top_right)
			{

			}
		}
		else if (br.type > 10 && br.type < 15) // T
		{
			if (br.type == _TypeBricks::T_bottom)
			{

			}
			else if (br.type == _TypeBricks::T_top)
			{

			}
			else if (br.type == _TypeBricks::T_left)
			{

			}
			else if (br.type == _TypeBricks::T_right)
			{

			}
			
		}
		else if (br.type > 15 && br.type < 20) // Z
		{
			if (br.type == _TypeBricks::Z_down_left)
			{

			}
			else if (br.type == _TypeBricks::Z_down_right)
			{

			}
			else if (br.type == _TypeBricks::Z_up_left)
			{

			}
			else if (br.type == _TypeBricks::Z_up_right)
			{

			}
		}
		else if (br.type > 20 && br.type < 23) //Stick
		{
			if (br.type == _TypeBricks::Stick_down)
			{

			}
			else if (br.type == _TypeBricks::Stick_up)
			{

			}
		}
		else if (br.type == 30) // square
		{

		}
	}
	else if (br.dir == _Move::Right)
	{
		if (br.type > 0 && br.type < 10)// L
		{
			if (br.type == _TypeBricks::L_down_left_bottom || br.type == _TypeBricks::L_down_left_top)
			{

			}
			else if (br.type == _TypeBricks::L_down_right_bottom)
			{

			}
			else if (br.type == _TypeBricks::L_down_right_top)
			{

			}
			else if (br.type == _TypeBricks::L_up_bottom_left)
			{

			}
			else if (br.type == _TypeBricks::L_up_top_left)
			{

			}
			else if (br.type == _TypeBricks::L_up_top_right || br.type == _TypeBricks::L_up_bottom_right)
			{

			}
		}
		else if (br.type > 10 && br.type < 15) // T
		{
			if (br.type == _TypeBricks::T_bottom)
			{

			}
			else if (br.type == _TypeBricks::T_top)
			{

			}
			else if (br.type == _TypeBricks::T_left)
			{

			}
			else if (br.type == _TypeBricks::T_right)
			{

			}

		}
		else if (br.type > 15 && br.type < 20) // Z
		{
			if (br.type == _TypeBricks::Z_down_left)
			{

			}
			else if (br.type == _TypeBricks::Z_down_right)
			{

			}
			else if (br.type == _TypeBricks::Z_up_left)
			{

			}
			else if (br.type == _TypeBricks::Z_up_right)
			{

			}
		}
		else if (br.type > 20 && br.type < 23) //Stick
		{
			if (br.type == _TypeBricks::Stick_down)
			{

			}
			else if (br.type == _TypeBricks::Stick_up)
			{

			}
		}
		else if (br.type == 30) // square
		{

		}
	}
}