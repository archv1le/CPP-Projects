#include <iostream>

#include "Todo.h"
#include "TodoList.h"

int main() {
    TodoList todoList;

    while (true) {
        std::cout << "\nTo-do Menu:" << std::endl;
        std::cout << "1. Add To-do" << std::endl;
        std::cout << "2. Display To-dos" << std::endl;
        std::cout << "3. Update To-do" << std::endl;
        std::cout << "4. Delete To-do" << std::endl;
        std::cout << "5. Exit" << std::endl;

        int choice;
        std::cout << "Enter your choice (1-5): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
            {
                std::string task;
                std::cout << "Enter new task: ";
                std::cin.ignore();
                std::getline(std::cin, task);
                todoList.addTodo(task);
                break;
            }
            case 2:
                todoList.displayTodos();
                break;
            case 3:
            {
                int index;
                std::string newTask;
                std::cout << "Enter index of the to-do to update: ";
                std::cin >> index;
                std::cout << "Enter new task: ";
                std::cin.ignore();
                std::getline(std::cin, newTask);
                todoList.updateTodo(index - 1, newTask);
                break;
            }
            case 4:
            {
                int index;
                std::cout << "Enter index of the to-do to delete: ";
                std::cin >> index;
                todoList.deleteTodo(index - 1);
                break;
            }
            case 5:
                std::cout << "Goodbye!" << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please enter a number between 1 and 5." << std::endl;
        }
    }
}
