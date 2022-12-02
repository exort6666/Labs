#include <iostream>
#include <Func.hpp>
void main()
{
	int A[100][100], n;
	std::cin >> n;
	LE::writing(n, A);
	if (LE::bigDiagonal(A, n)) {
		int q = LE::proizDiagon(A, n);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (LE::nol(A[i][j]))
					A[i][j] = q;
				std::cout << A[i][j] << " ";
			}
			std::cout << "\n";
		}
	}
	else {
		LE::print(A[100][100], n);
	}
}