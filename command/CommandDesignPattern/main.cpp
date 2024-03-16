#include "Command.h"
#include "MoveCommand.h"
#include "PunchCommand.h"
#include "JumpCommand.h"
#include <vector>
#include <memory>
#include <ctime>

int main() {
    srand(time(NULL));

	Character MyCharacter("Najlae");
    Character myEnemy("Enemy");

    std::vector<std::unique_ptr<Command>> MyCommands;
    MyCommands.push_back(std::make_unique<MoveCommand>());
    MyCommands.push_back(std::make_unique<JumpCommand>());
    MyCommands.push_back(std::make_unique<MoveCommand>());
    MyCommands.push_back(std::make_unique<PunchCommand>(myEnemy));

    for (const auto& command : MyCommands) {
        command->execute(MyCharacter);
        std::cout << "*************************" << std::endl;
    }
    std::cout << "\n********************UNDOING********************\n\n";

    for (int i = MyCommands.size() - 1; i >= 0; i--) {
        MyCommands[i]->undo(MyCharacter);
        std::cout << "*************************" << std::endl;
    }
	return 0;
}