#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int pages[7];
	int sum = 0;
	for (int i = 0; i < 7; i++) {
		cin >> pages[i];
		sum += pages[i];
	}

	if (n > sum) n %= sum;
	if (n == 0) n = sum;

	for (int i = 0; i < 7; i++) {
		if (pages[i] == 0) continue;
		if (pages[i] >= n) {cout << i + 1; break;}
		n -= pages[i];
	}
}
