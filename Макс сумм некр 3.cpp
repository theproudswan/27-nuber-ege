// Максимальная сумма, которая некратна 3.
// На вход числа поступают парами.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int buf1, buf2;
	int sum = 0;
	int min = 2001;
	for (int i = 0; i < n; ++i) {
		cin >> buf1;
		cin >> buf2;
		sum+=max(buf1, buf2);
		if (abs(buf1 - buf2) != 3 && abs(buf1 - buf2) < min) {
			min = abs(buf1 - buf2);
		}
	}
	if (sum %3 != 0) {
		cout << endl << sum << endl;
	}
	else {
		if (min != 2001) {
			cout << endl << sum - min << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
    return 0;
}

