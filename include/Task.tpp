#include "Task.hpp" 
#include <ostream>

Task::Task(int64_t prio, std::function<TaskResult(TaskArgument)> func) 
{
    m_priority = prio;
    m_function = func;
}

int64_t Task::getPriority()
{
    return m_priority;
}

bool Task::operator<(const Task& rhs)
{
    if(m_priority < rhs.m_priority)
    {
        return true;
    }
    return false;
}

TaskResult Task::operator()(TaskArgument arg)
{
    return m_function(arg);
}

std::ostream& operator<<(std::ostream& os, const Task& t)
{
    os << "priority: " 
       << t.m_priority << "\n";

    return os;
}


std::function<TaskResult(TaskArgument)> Task::get_m_function()
{
    return m_function;
}
