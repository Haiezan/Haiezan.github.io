#include <iostream>
using namespace std;

int main()
{
	int x, a, y, b;
	cin >> x >> a >> y >> b;
	printf("%.2f\n", 1.0 * (( x * a - y * b ) / (a - b))); //������λС����
	return 0;
}
