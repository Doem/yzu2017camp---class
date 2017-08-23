#include <iostream>
using namespace std;

int main() {

	int myAccount, myPassword;

	cin >> myAccount >> myPassword;

	if (myAccount == 123456) {
		if (myPassword == 456789) {
			cout << "登入成功" << endl;
		}
		else {
			cout << "密碼錯誤" << endl;
		}
	}
	else {
		cout << "帳號錯誤" << endl;
	}
	//---------------------------------------------------------

	if (myAccount == 123456 && myPassword == 456789) {
		cout << "登入成功" << endl;
	}
	else {
		cout << "帳號或密碼錯誤" << endl;
	}

	system("PAUSE");
	return  0;
}