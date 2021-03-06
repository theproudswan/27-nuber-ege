// Максимальная сумма, которая кратна 31
// На вход поступают пары чисел.

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int buf1, buf2;
	int max = 0;
	int min1 = 2001, min2 = 2001;
	int a[31] = { 0 };
	int k;
	for (int i = 0; i < 31; ++i) {
		a[i] = 2001;
	}
	for (int i = 0; i < n; ++i) {
		cin >> buf1;
		cin >> buf2;
		if (buf1 > buf2) {
			max += buf1;
		}
		else {
			max += buf2;
		}
		k = abs(buf1 - buf2)%31;
		if (abs(buf1 - buf2) < a[k]) {
			a[k] = abs(buf1 - buf2);
		}
	}
	if (max % 31 == 0) {
		cout << endl << max << endl;
	}
	else {
		k = max % 31;
		if (a[k] != 2001) {
			cout << max - a[k] << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
    return 0;
}

