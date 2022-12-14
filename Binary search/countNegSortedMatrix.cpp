// CPP implementation of Naive method
// to count of negative numbers in
// M[n][m]
#include <bits/stdc++.h>
using namespace std;
//NAIVE
int countNegative(int M[][4], int n, int m)
{
	int count = 0;

	// Follow the path shown using
	// arrows above
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (M[i][j] < 0)
				count += 1;

			// no more negative numbers
			// in this row
			else
				break;
		}
	}
	return count;
}

// Driver program to test above functions
int main()
{
	int M[3][4] = { { -3, -2, -1, 1 },
					{ -2, 2, 3, 4 },
					{ 4, 5, 7, 8 } };

	cout << countNegative(M, 3, 4);
	return 0;
}
// This code is contributed by Niteesh Kumar
