

class JumpCommand : public Command {
	public:
		void execute(Character& character) {
			character.jump();
		}
		void undo(Character& character) {
			std::cout << "Can't undo a jump (Not logic)" << std::endl;
		}
};