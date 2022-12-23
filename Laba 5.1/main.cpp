#include <iostream>
#include <fstream>

int main()
{
	const int N = 100;
	char str[N] = { '\0' };
	char words[N][N] = {'\0'};
	int n = 1;
	int s = 0;

	gets_s(str, 100);

	for (int i = 0; i < N; i++) {
		if (str[i] == ' ')
		{
			n++;
		}
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < N; j++) {
			if (str[s] != ' ' && str[s] != '\0') {
				words[i][j] = str[s];
				s++;
			}
			else if (str[s] == ' ') {
				while (str[s] == ' ') {
					s++;
				}
				break;
			}
		}
		if (str[s] == '\0')
			break;
	}
	
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0, k = i + 1; k < n;) {
			if (words[i][j] < words[k][j]) {
				j = 0;
				k++;
			}
			else if (words[i][j] == words[k][j]) {
				j++;
			}
			else if (words[k][j] == '\0') {
				k++;
				j = 0;
			}
			else if (words[i][j] > words[k][j]) {
				j = 0;
				while  (words[k][j] || words[i][j]) {
					char tmp = words[i][j];
					words[i][j] = words[k][j];
					words[k][j] = tmp;
					j++;
				}
				j = 0;
			}
		}
	}
	

	for (int i = 0; i < n; i++) {
		for (int j = 0; words[i][j]!='\0'; j++) {
			std::cout << words[i][j];
		}
		std::cout << " ";
	}

}

