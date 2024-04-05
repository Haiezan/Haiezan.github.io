#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int X, Y, I;
	cin >> X >> Y >> I;

	int *A = new int[(X + 1) * (Y + 1)]; //X*YÌïµØ
	memset(A, 0, (X + 1) * (Y + 1) * sizeof(int));

	int *Xll = new int[I];
	int *Yll = new int[I];
	int *Xur = new int[I];
	int *Yur = new int[I];

	for (int i = 0; i < I; i++)
		cin >> Xll[i] >> Yll[i] >> Xur[i] >> Yur[i];

	int sum = 0;
	for (int i = 0; i < I; i++) {
		for (int ii = Xll[i]; ii <= Xur[i]; ii++ ) {
			for (int jj = Yll[i]; jj <= Yur[i]; jj++ ) {
				int *flag = &A[ii * (Y + 1) + jj];
				if (*flag == 0) {
					sum++;
					*flag = 1;
				}
			}
		}
	}

	delete[] Xll;
	delete[] Yll;
	delete[] Xur;
	delete[] Yur;
	delete[] A;

	cout << sum;

	return 0;
}
