#ifndef SOCKET_HPP
#define SOCKET_HPP
#include <iostream>
#include <string>
#include <vector>
#include <cstddef>


class Socket
{
public:
    Socket(std::string address, std::string port);

    void bind();
    void listen();
    void accept();
    void connect();

    void send(std::vector<std::byte> message);
    void receive(std::vector<std::byte> message);

private:
    std::size_t m_fd;
    std::string m_address;
    std::string m_port;
};


#include "Socket.cpp"
#endif //SOCKET_HPP