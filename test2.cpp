#include <iostream>
using namespace std;

void half(double &a) {
	int b = a / 2;
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	double n = 20;
	half(n); //n의 반값을 구해 n을 바꾼다
	cout << n;
	return 0;
}