// Минимальная сумма, которая кратна 21
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a[23] = { 0 };
	int buf, ans = 10001;
	int n;
	cin >> n;
	for (int i = 0; i<n; ++i) {
		cin >> buf;

		if (buf % 21 == 0) {
			if (buf < a[0] || a[0] == 0 || a[21] == 0) {
				if ((a[0] < a[21]) || a[21] == 0) {
					a[21] = a[0];
				}
				a[0] = buf;
			}
		}
		else if (a[buf % 21] < buf || (a[buf % 21] == 0)) {
			a[buf % 21] = buf;
		}
	}

	for (int i = 0; i < 11; i++) {
		cout << i << ": " << a[i] << "		" << 21 - i << ": " << a[21 - i] << endl << endl;
		if (a[i] != 0 && a[21 - i] != 0) {
			if ((a[i] + a[21 - i]) % 21 == 0 && (a[i] + a[21 - i] < ans)) {
				ans = a[i] + a[21 - i];
			}
		}
	}

	if (ans != 10001) {
		cout << ans << endl;
	}
	else {
		cout << -1 << endl;
	}
	return 0;
}

