#include <iostream>
using namespace std;

int main() {

	int a;
	int b;
	cout << "�� ���� �Է��ϼ��� : ";
	cin >> a;
	cin >> b;

	if (a > b) {
		cout << "���� ū �� " << a;
	}
	else if (b > a) {
		cout << "���� ū �� " << b;
	}
	else {
		cout << "a,b�� ���� ����";
	}



	return 0;
}