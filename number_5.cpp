#include <iostream>
#include <cstring>
using namespace std;

int main() {


	char a[100];
	int count = 0;

	cout << "���ڵ��� �Է��϶�(100�� �̸�)\n";
	cin.getline(a, 100);

	for (int i = 0; i < sizeof(a); i++) {
		if (a[i] == 'x') {
			count++;
		}
	}
	cout << "x�� ������ " << count;



	return 0;
}