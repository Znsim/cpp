#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success) {
	int temp;
	temp = a[0]; //M
	success = true;
	return a[0];
}

int  main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M�� �߰��� �� ����." << endl;
		return 0;
	}
	loc = 'm'; //M ��ġ�� m���
	
	cout << s << endl; //"mike"�� ��µ�
	return 0;
}