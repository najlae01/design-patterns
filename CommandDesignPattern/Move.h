#include "Command.h"

class Move : public Command {
	public:
		void execute(Character& character) {
			std::cout << character.name << " just moved"<< std::endl;
		}
		void undo(Character& character) {

		}
};