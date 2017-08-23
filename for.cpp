#include <iostream>
using namespace std;

int main() {

	int sum = 0;

	for (int i = 1; i <= 10; i = i + 1) {
		sum = sum + i;
	}

	cout << sum << endl;
	cout << "-----------------------------------------------" << endl;

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++)
			cout << i << " * " << j << " = " << i * j << "  ";
		cout << endl;
	}

	system("PAUSE");
	return  0;
}