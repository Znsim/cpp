#include <iostream>
using namespace std;

int main() {

	int a;
	int b;
	cout << "두 수를 입력하세요 : ";
	cin >> a;
	cin >> b;

	if (a > b) {
		cout << "제일 큰 수 " << a;
	}
	else if (b > a) {
		cout << "제일 큰 수 " << b;
	}
	else {
		cout << "a,b의 값이 같다";
	}



	return 0;
}