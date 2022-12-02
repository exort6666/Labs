#include <Func.hpp>
#include <iostream>
namespace LE {
	bool bigDiagonal(int A[100][100], int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (A[i][i] < A[i][j])
				{
					return false;
				}
			}
		}
		return true;
	}
	int proizDiagon(int A[100][100], int n) {
		int s = 1;
		for (int i = 0; i < n; i++) {
			s = s * A[i][i];
		}
		return s;
	}
	void writing(int n, int A[100][100]) {
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				std::cin >> A[i][j];
			}
		}
	}
	bool nol(int n) {
		if (n == 0)
			return true;
		while (n > 0) {
			if (n % 10 == 0) {
				return true;
			}
			n /= 10;
		}
		return false;
	}
	void print(int A[100][100],int n) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				std::cout << A[i][j] << " ";
			}
			std::cout << "\n";
		}
	}
}