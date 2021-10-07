#include<iostream>

using namespace std;

void run_func(int* x, int* y) {
	for (int i = 1; i < T; i++) {
		x--;
		y++;
	}
}

int main() {
	int T = 0;
	cin >> T;
	int count = 1;
	int x = 0, y = 0;
	while (T > count) {
		T -= count;
		count++;
	}
	
	if (count % 2 == 1) {
		run_func(&x, &y);
		x = count;
		y = 1;

	}
	else {
		x = 1;
		y = count;
		for (int i = 1; i < T; i++) {
			x++;
			y--;
		}
	}

	cout << x << "/" << y << endl;
}