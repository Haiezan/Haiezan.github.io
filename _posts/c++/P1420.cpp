#include <iostream>
using namespace std;

int main() {
	int n;
	int a[1000 + 5];

	int num = 1;
	int maxnum = 0;
	cin >> n;
	cin >> a[0];

	for (int i = 1; i < n; i++) {
		cin >> a[i];
		if (a[i] == a[i - 1] + 1)
			num++;
		else
			num = 1;

		if (num > maxnum)
			maxnum = num;
	}

	cout << maxnum;

	return 0;
}
