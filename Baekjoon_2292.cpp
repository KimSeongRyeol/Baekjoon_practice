#include <iostream>

using namespace std;

int main() {
	int num, i = 1, low = 2, high = 7;
	cin >> num;

	if (num == 1) {
		cout << 1;
	}
	while (num != 1) {
		if (num >= low && high >= num) {
			cout << i + 1;
			break;
		}
		else {
			low += 6 * i;
			high += 6 * (i + 1);
			i++;
		}
	}
}