
class MoveCommand : public Command {
	private:
		int xBefore, yBefore;
	public:
		void execute(Character& character) {
			xBefore = character.x;
			yBefore = character.y;
			character.move();
		}
		void undo(Character& character) {
			character.x = xBefore;
			character.y = yBefore;
			std::cout << character.name << " just moved back to (" << character.x << ", " << character.y
				<< ", " << character.z << ")" << std::endl;
		}
};