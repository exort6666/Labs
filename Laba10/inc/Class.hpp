#pragma once
#include <vector>
class Subscriber
{
private:
	unsigned int m_id;
	std::string m_name;
public:
	Subscriber(int id, std::string name);
	~Subscriber();
	std::string getName();
};
class Provider
{
private:
	unsigned int m_id;
	std::string m_name;
	std::vector<Subscriber*> m_subscribers;
public:
	Provider(int id, std::string name);
	~Provider();
	void AddSubsriber(Subscriber* subscribers);
	void PrintSubscribers();
};