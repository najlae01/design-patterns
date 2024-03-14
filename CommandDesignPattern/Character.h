#include <string>
#include <iostream>

class Character {
	public:
		int x;
		int y;
		std::string name;

		Character(std::string _name) : name(_name){}

		void move(int _x, int _y) {
			x = _x;
			y = _y;
		}
};