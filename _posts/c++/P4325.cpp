#include <iostream>
#include <string.h>
using namespace std;

int main() {

	int a[42];
	memset(a, 0, sizeof(a));

	int num;
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		cin >> num;
		int result = num % 42;
		if (a[result] == 0) {
			sum++;
			a[result] = 1;
		}
	}

	cout << sum;

	return 0;
}
