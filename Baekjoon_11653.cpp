#include <iostream>
using namespace std;

int main() {
	int input, num = 2;
	cin >> input;

	while (input != 1) {
		if (input % num == 0) {
			cout << num << endl;
			input /= num;
		}
		else {
			num++;
		}
	}
}