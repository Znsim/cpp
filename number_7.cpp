#include <iostream>
#include <string>
using namespace std;

int main() {

	char x[100];
	string y("yes");

	for (int i = 0; i < sizeof(x); i++) {
		cin.getline(x, 100);

		if (x != y) {
			cout << "�����ϰ� �ʹٸ� yes�� �Է��ϼ���";
			cin.getline(x, 100);
		}
		else {
			cout << "�����մϴ�";

			break;
		}
	}


	return 0;
}