#include <string>
#include <iostream>
#include <cstdlib>

class Character {
	public:
		int x;
		int y;
		int z;
		int health;
		std::string name;

		Character(std::string _name) : name(_name), x(0), y(0), z(0), health(100) {}

		void move() {
			x = rand() % 10;
			y = rand() % 10;
			std::cout << name << " just moved to (" << x <<", " << y << ", " << z <<")" << std::endl;
		}

		void jump() {
			const int jumpHeight = 10;
			const int gravity = 1;

			// Simulate the character jumping by increasing the z-coordinate
			for (int i = 0; i < jumpHeight; ++i) {
				z += gravity; // Simulate gravity
				//std::cout << name << " is at height " << z << std::endl;
			}
			std::cout << name << " is at height " << z << std::endl;

			// Bring the character back to the floor
			for (int i = 0; i < jumpHeight; ++i) {
				z -= gravity; // Simulate falling
				//std::cout << name << " is at height " << z << std::endl;
			}
			std::cout << name << " returns to the floor!" << std::endl;
			std::cout << name << " just jumped!"<< std::endl;
		}

		void punch(Character& enemy) {
			enemy.health -= 10; 
			std::cout << name << " just punched " << enemy.name << ". ";
			std::cout << enemy.name << "'s health is now " << enemy.health << std::endl;
		}

		void undoPunch(Character& enemy) {
			std::cout << name << " is undoing the punch for " << enemy.name << std::endl;
			enemy.health += 10;
			std::cout << enemy.name << "'s health is now " << enemy.health << std::endl;
		}
};