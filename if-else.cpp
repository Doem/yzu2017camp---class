#include <iostream>
using namespace std;

int main() {

	int myAccount, myPassword;

	cin >> myAccount >> myPassword;

	if (myAccount == 123456) {
		if (myPassword == 456789) {
			cout << "�n�J���\" << endl;
		}
		else {
			cout << "�K�X���~" << endl;
		}
	}
	else {
		cout << "�b�����~" << endl;
	}
	//---------------------------------------------------------

	if (myAccount == 123456 && myPassword == 456789) {
		cout << "�n�J���\" << endl;
	}
	else {
		cout << "�b���αK�X���~" << endl;
	}

	system("PAUSE");
	return  0;
}