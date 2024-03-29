#include <iostream>
#include <algorithm>
using namespace std;

//string a[20000];
//int n;
int n = 6;
string a[] = { "5", "ABCD", "145C", "A", "A910", "Z231"};

int getSum(string a) {
	int length = a.length(), sum = 0;
	for (int i = 0; i < length; i++) {
		// 숫자인 경우에만 add
		if (a[i] - '0' <= 9 && a[i] - '0' >= 0) {
			sum += a[i] - '0';
		}
	}
	return sum;
}


bool compare(string a, string b) {
	if (a.length() < b.length()) {
		return 1;
	}
	else if (a.length() > b.length()) {
		return 0;
	}
	else { // 길이가 같은 경우
		//return a < b; // 사전순 정렬(string에서 제공)
		int aSum = getSum(a);
		int bSum = getSum(b);

		if (aSum != bSum) {
			return aSum < bSum; 
		}
		else {
			return a < b;
		}
	}
}

int main(void) {


	/*cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}*/

	sort(a, a + n, compare);
	for (int i = 0; i < n; i++)
	{
		cout << a[i]  << "\n";
	}
	return 0;

}