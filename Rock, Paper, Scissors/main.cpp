#include <iostream>
#include <cctype>
#include <vector>
#include <string>
#include <random>

int main() {
    std::string input;
    std::vector<std::string> options = {"rock", "scissors", "paper"};

    std::cout << "Enter rock, scissors or paper:";
    std::cin >> input;

    for (char &character : input) {
        character = std::tolower(character);
    }

    if (input != "rock" && input != "scissors" && input != "paper") {
        std::cout << "You have lost, because you've entered wrong option!" << std::endl;
    } else {
        std::random_device randomDevice;
        std::mt19937 gen(randomDevice());
        std::uniform_int_distribution<> dis(0, options.size() - 1);

        int randomIndex = dis(gen);
        std::string randomOption = options[randomIndex];

        if ((input == "rock" && randomOption == "scissors") || (input == "scissors" && randomOption == "paper") || input == "paper" && randomOption == "rock") {
            std::cout << "You have won!" << std::endl;
            std::cout << "Option of the foe: " << randomOption << std::endl;
        } else if (input == randomOption) {
            std::cout << "Draw!" << std::endl;
        } else {
            std::cout << "You have lost!" << std::endl;
            std::cout << "Option of the foe: " << randomOption << std::endl;
        }
    }

    return 0;
}
