#include <iostream>
#include <Class.hpp>
#include <vector>
Subscriber::Subscriber(int id, std::string name)
{
	m_id = id;
	m_name = name;
}
std::string Subscriber::getName() {
	return m_name;
}
Subscriber::~Subscriber() {
	std::cout << "Destructor Subscriber" << std::endl;
}