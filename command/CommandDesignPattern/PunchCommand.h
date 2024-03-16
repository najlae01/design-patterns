
class PunchCommand : public Command {
	private:
		Character& enemy;
	public:
		PunchCommand(Character& _enemy) : enemy(_enemy) {}

		void execute(Character& character) {
			character.punch(enemy);
		}
		void undo(Character& character) {
			character.undoPunch(enemy);
		}
};