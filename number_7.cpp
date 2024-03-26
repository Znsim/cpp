#include <iostream>
#include <string>
using namespace std;

int main() {

	char x[100];
	string y("yes");

	for (int i = 0; i < sizeof(x); i++) {
		cin.getline(x, 100);

		if (x != y) {
			cout << "종료하고 싶다면 yes를 입력하세요";
			cin.getline(x, 100);
		}
		else {
			cout << "종료합니다";

			break;
		}
	}


	return 0;
}