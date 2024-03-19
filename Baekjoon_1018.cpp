#include <iostream>
using namespace std;

int main() {
	int width, length, min = 64;
	char WB[8][8];
	char BW[8][8];
	cin >> width;
	cin >> length;

	char **array = new char *[width];
	for (int i = 0; i < width; i++) {
		array[i] = new char[length];
	}

	for (int i = 0; i < width; i++) {
		for (int j = 0; j < length; j++) {
			cin >> array[i][j];
		}
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j+=2) {
			if (i % 2 == 0) {
				WB[i][j] = 'W';
				WB[i][j + 1] = 'B';
				BW[i][j] = 'B';
				BW[i][j + 1] = 'W';
			}
			else {
				WB[i][j] = 'B';
				WB[i][j + 1] = 'W';
				BW[i][j] = 'W';
				BW[i][j + 1] = 'B';
			}
		}
	}
	for (int i = 0; i < width - 7; i++) {
		for (int j = 0; j < length - 7; j++) {
			int WBCount = 0, BWCount = 0;
			for (int k = 0; k < 8; k++) {
				for (int l = 0; l < 8; l++) {
					if (array[k+i][l+j] != WB[k][l]) {
						WBCount++;
					}

					if (array[k+i][l+j] != BW[k][l]) {
						BWCount++;
					}
				}
			}
			if (min > (WBCount > BWCount ? BWCount : WBCount)) {
				min = WBCount > BWCount ? BWCount : WBCount;
			}
		}
	}

	
	cout << min;
}