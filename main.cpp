#include <iostream>
#include "Define.h"
#include "Brick.h"

int main()
{
	Brick br{ _Point{ 40, 3 }, _Point{40, 3},_TypeBricks::Z_up_left, _Move::Left};
	
	

	for (int i = 40; i > 5; i--)
	{
		_Br_draw(br);
		Sleep(100);
		br.old_Coor = br.main_Coordinate;
		_Br_eraseOld(br);
		br.main_Coordinate = { i, br.main_Coordinate.y };
	}
	_Co_gotoxy(_Point{ 10,10 });
	system("pause");
	return 0;
}