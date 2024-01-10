#include <iostream>
using namespace std;

int main() {
	int k, n;
	cin >> k;

	double sn = 0;
	n = 0;
	while (sn <= k) {
		n++;
		sn += 1.f / n;
	}

	cout << n;

	return 0;
}
