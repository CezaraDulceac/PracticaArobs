#include "Socket.hpp"
#include <cstddef>
#include <iostream>

Socket::Socket(std::string address, std::string port)
{
    m_address = address;
    m_port = port;
}

void Socket::bind()
{

}
void Socket::listen()
{

}
void Socket::accept()
{

}
void Socket::connect()
{

}

void Socket::send(std::vector<std::byte> message)
{

}
void Socket::receive(std::vector<std::byte> message)
{

}