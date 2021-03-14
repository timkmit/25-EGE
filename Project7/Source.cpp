#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int  k, v, max, min;
	min = 0;
	max = 0;
	v = 850000;
	k = 0;
	for (int i = v+1, find = 0; find < 6; i++) {
		int f = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				min = j;
				max = i / j;
				f = max - min;
				break;
			}
		}
		if (f % 7 == 0 && f != 0) {
			find ++;
			cout << i << ' ' << f << endl;
		}

	}
}









/*
for (int r = 1; r < i; r++) {
	if ((i % r == 0) && (r != 0)) {
		if (min > r) {
			min = r;
		}
		if (max < r) {
			max = r;
		}
	}
	f = max - min;
	if ((f != 0) && (f % 7 == 0)) {
		cout << r << ' ' << f << ' ' << find << endl;
		find += 1;
	}

}
*/
