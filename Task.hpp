#ifndef TASK_HPP
#define TASK_HPP

#include <cstddef>
#include <cstdint>
#include <ostream>
#include <string>

class Task{
public:
    Task();

    std::string getDescription();
    std::int8_t getPriority();

    bool operator<(const Task& rhs);

    friend std::ostream& operator<<(std::ostream& os, const Task& t);

private:
    std::string m_description;
    std::int8_t m_priority;
};
#include "Task.tpp"
#endif  //TASK_HPP