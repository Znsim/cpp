#include <iostream>
using namespace std;
bool bigger(int a,int b, int& bigger) {
	if (a == b) {
		return true;
	}
	else {
		int max = a;
		if (a < b) {
			max = b;
		}
		bigger = max;
		return false;
	}
	return false;
}
int main() {
	int a, b,big=0;
	cin >> a>>b;
	cout <<"{true(1) false(0)}" << bigger(a, b, big) << " big = " << big << endl;
	
	return 0;
}