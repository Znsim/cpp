#include <iostream>
using namespace std;

void combine(string &a,string &b,string &c) {
	//a = 1 b = 2 c = 3
	c = a + b;
}

int main() {
	string text1("I love you"), text2("very much");
	string text3; //비어있는 문자열
	combine(text1, text2, text3);
	cout << text3; //출력 : I love you ver much
	return 0;
}