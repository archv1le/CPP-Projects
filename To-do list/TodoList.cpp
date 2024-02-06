#include <iostream>

#include "TodoList.h"

void TodoList::addTodo(const std::string &task) {
    Todo newTodo(task);
    todos.push_back(newTodo);
    std::cout << "To-do added: " << task << std::endl;
}

void TodoList::displayTodos() const {
    if (todos.empty()) {
        std::cout << "No to-dos found." << std::endl;
        return;
    }

    std::cout << "To-do list:" << std::endl;

    for (size_t i = 0; i < todos.size(); i++) {
        std::cout << i + 1 << ". " << todos[i].getTask() << std::endl;
    }
}

void TodoList::updateTodo(int index, const std::string &newTask) {
    if (index >= 0 && index < todos.size()) {
        todos[index] = Todo(newTask);

        std::cout << "To-do updated successfully." << std::endl;
    } else {
        std::cout << "Invalid index." << std::endl;
    }
}

void TodoList::deleteTodo(int index) {
    if (index >= 0 && index < todos.size()) {
        todos.erase(todos.begin() + index);

        std::cout << "To-do deleted successfully." << std::endl;
    } else {
        std::cout << "Invalid index." << std::endl;
    }
}
