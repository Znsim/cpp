#include <iostream>
#include <string>
using namespace std;

int main() {



	cout << "새 암호를 입력하세요 \n";
	string a;
	cin >> a;
	cout << "새 암호를 다시 한번 입력하세요 \n";
	string b;
	cin >> b;

	if (a == b) {
		cout << "같다.";
	}
	else {
		cout << "다르다";
	}




	return 0;
}