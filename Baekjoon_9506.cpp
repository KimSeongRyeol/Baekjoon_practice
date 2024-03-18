#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	cin >> num;

	while (num != -1) {
		int sum = 1;
		string str;;

		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				sum += i;
				str += " + ";
				str += to_string(i);
			}
		}

		if (num != sum) {
			cout << num << " is NOT perfect." << endl;
		}
		else {
			cout << num << " = 1" << str << endl;
		}
		cin >> num;
	}
}