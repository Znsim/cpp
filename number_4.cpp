#include <iostream>
using namespace std;

int main() {

	double a, b, c, d, e;
	cout << "5 개의 수를 입력하세요 : ";
	cin >> a >> b >> c >> d >> e;
	double max = 0;

	if (max < a) {
		max = a;
	}
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	if (max < d) {
		max = d;
	}
	if (max < e) {
		max = e;
	}
	cout << max;

	return 0;
}



//#include <iostream>
//using namespace std;
//
//int main() {
//
//	double k[5];
//	double max = 0;
//
//	cout << "5 개의 수를 입력하세요 : ";
//	for (int i = 0; i < 5/*sizeof(k)*/; i++) {
//		cin >> k[i];
//
//		if (max < k[i]) {
//			max = k[i];
//		}
//	}
//
//	cout << max;
//
//
//	return 0;
//}