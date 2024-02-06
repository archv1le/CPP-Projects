#ifndef TO_DO_LIST_TODOLIST_H
#define TO_DO_LIST_TODOLIST_H

#include <vector>

#include "Todo.h"

class TodoList {
private:
    std::vector<Todo> todos;
public:
    void addTodo(const std::string& task);
    void displayTodos() const;
    void updateTodo(int index, const std::string& newTask);
    void deleteTodo(int index);
};

#endif
