#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int time = (c - a) * 60 + d - b;
	cout << time / 60 << " " << time % 60;

	return 0;
}
