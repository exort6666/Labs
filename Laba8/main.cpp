#include <iostream>
void main()
{
	int n;
	std::cin >> n;
	unsigned char* p = (unsigned char*)&n;
	for (int i = 3; i >= 0; i--)
	{
		printf("%d ",p[i]);
	}
}
