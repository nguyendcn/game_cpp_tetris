#include <iostream>
#include "Define.h"
#include "Brick.h"

int main()
{
	Brick br{ _Point{ 5, 3 }, _Point{5, 3},_TypeBricks::L_down_left_bottom , _Move::Down};
	
	

	for (int i = 3; i < 40; i++)
	{
		_Br_draw(br);
		Sleep(1000);
		br.old_Coor = br.main_Coordinate;
		dis_eraseBox(br.old_Coor);
		br.main_Coordinate = { br.main_Coordinate.x, i };
	}
	_Co_gotoxy(_Point{ 10,10 });
	system("pause");
	return 0;
}