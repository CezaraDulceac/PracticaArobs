#ifndef EVENTMANAGER_HPP
#define EVENTMANAGER_HPP
#include "Functional.hpp"
#include "EventPayload.hpp"
#include "EventType.hpp"
#include <map>
#include <vector>

class EventManager
{
    using THandler = std::function<void(const EventPayload&)>;
public:

    void subscribe(EventType type, std::function<void(EventPayload)> handler)
    {
        if (m_handlers.find(type) !=  m_handlers.end())
        {
            m_handlers[type] = {};
        }

        m_handlers[type].push_back(handler);
    }
    void fire(EventType type, EventPayload payload)
    {
        for (auto& handler : m_handlers[type])
        {
            handler(payload);
        }
    }

private:
    std::map<EventType,std::vector<THandler>> m_handlers;
};

#endif //EVENTMANAGER_HPP