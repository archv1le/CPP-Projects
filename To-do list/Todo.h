#ifndef TO_DO_LIST_TODO_H
#define TO_DO_LIST_TODO_H

#include <string>

class Todo {
private:
    std::string task;
public:
    explicit Todo (std::string task) : task(std::move(task)) {}
    [[nodiscard]] std::string getTask() const;
};

#endif
