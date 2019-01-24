#include <iostream>
#include "Define.h"
#include "Brick.h"

int main()
{
	/*for (int i = 0; i < 255; i++)
	{
		std::cout << i << ": " << (char)i << "\n";
	}*/
	/*std::cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << "\n";   
	std::cout << "    " << (char)219 << (char)219 << "\n\n";

	std::cout << (char)219 << (char)219 << (char)219 << (char)219 << "\n";
	std::cout << (char)219 << (char)219 << (char)219 << (char)219 << "\n\n";

	std::cout << "  " << (char)219 << (char)219 << "\n";
	std::cout << (char)219 << (char)219 << (char)219 << (char)219 << "\n";
	std::cout << (char)219 << (char)219 << "\n\n";

	std::cout << (char)219 << (char)219 << (char)219 << (char)219 << "\n";
	std::cout << "  " << (char)219 << (char)219 << (char)219 << (char)219 << "\n\n";

	std::cout << _TypeBricks::L_up_top_right << " ..." << _TypeBricks::L_up_top_left;*/

	
	Brick br { _Point{0, 3}, _TypeBricks::L_down_left_top };
	_Br_draw(br);

	system("pause");
	return 0;
}