#include "Character.h"

class Command {
	public:
		virtual ~Command(){}
		virtual void execute(Character& character) = 0;
		virtual void undo(Character& character) = 0;
};

