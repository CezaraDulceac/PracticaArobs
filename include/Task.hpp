#ifndef TASK_HPP
#define TASK_HPP

#include <cstdint>
#include <ostream>
#include <functional>

#include "TaskArgument.hpp"
#include "TaskResult.hpp"

class Task{
public:

    Task(int64_t prio, std::function<TaskResult(TaskArgument)> func);

    TaskResult operator()(TaskArgument arg);
    bool operator<(const Task& rhs);

    friend std::ostream& operator<<(std::ostream& os, const Task& t);

private:
    std::int64_t m_priority;
    std::function<TaskResult(TaskArgument)> m_function;
    std::int64_t getPriority();
};
#include "Task.tpp"
#endif  //TASK_HPP