#include <iostream>
using namespace std;

int main() {
	int input, fiveMultiple, threeMultiple, threeNum = 0, fiveNum = 0;
	cin >> input;
	
	if (input % 5 != 0) {
		fiveMultiple = input / 5 + 1;
	}
	else {
		fiveMultiple = input / 5;
		cout << fiveMultiple;
		return 0;
	}

	if (input % 3 != 0) {
		threeMultiple = input / 3 + 1;
	}
	else {
		threeMultiple = input / 3;
	}

	for (int i = 0; i <= threeMultiple; i++) {
		for (int j = 0; j <= fiveMultiple; j++) {
			if (3 * i + 5 * j == input) {
				if (j >= fiveNum) {
					threeNum = i;
					fiveNum = j;
				}
			}
		}
	}

	if (threeNum == 0 && fiveNum == 0) {
		cout << "-1";
	}
	else {
		cout << threeNum + fiveNum;
	}
}