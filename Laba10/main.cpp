#include <iostream>
#include <Class.hpp>
#include <vector>
void main()
{
	Provider provider (0, "Pivo");
	Subscriber* subscriber1 = new Subscriber(0, "Pavel Bobnev");
	Subscriber* subscriber2 = new Subscriber(1, "Tarantino");
	provider.AddSubsriber(subscriber1);
	provider.AddSubsriber(subscriber2);
	provider.PrintSubscribers();
}