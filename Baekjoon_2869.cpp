#include <iostream>

using namespace std;

int main() {
	int up, down, height, num = 1;
	cin >> up;
	cin >> down;
	cin >> height;

	num += (height - up) / (up - down);

	if ((height - up) % (up - down) != 0) {
		num++;
	}

	cout << num;
} 