#include <iostream>
#include <Class.hpp>
#include <vector>


Provider::Provider(int id, std::string name)
{
	m_id = id;
	m_name = name;
}
void Provider::AddSubsriber(Subscriber* subscribers)
{
	m_subscribers.push_back(subscribers);
}
void Provider::PrintSubscribers()
{
	for (size_t i = 0; i < m_subscribers.size(); i++) {
		std::cout << m_subscribers[i]->getName() << std::endl;
	}
}
Provider::~Provider() {
	std::cout << "Destructor Provider" << std::endl;
	for (size_t i = 0; i < m_subscribers.size(); i++) {
		delete m_subscribers[i];
	}
}
