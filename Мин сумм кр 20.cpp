// Минимальная сумма, которая кратна 20
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a[22] = { 0 };
	int buf,ans=10001;
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> buf;

		if (buf % 20 == 0) {
			if (buf < a[0] || a[0] == 0 || a[20] == 0) {
				if ((a[0] < a[20]) || a[20] == 0) {
					a[20] = a[0];
				}
				a[0] = buf;
			}
		} else if (buf % 20 == 10) {
			if (buf < a[10] || a[10] == 0 || a[21] == 0) {
				if ((a[10] < a[21]) || a[21] == 0) {
					a[21] = a[10];
				}
				a[10] = buf;
			}
		} else if (a[buf % 20] < buf || (a[buf % 20] == 0)) {
			a[buf % 20] = buf;
		}
	}

	for (int i = 0; i < 10; i++) {
		if (a[i] != 0 && a[20 - i] != 0) {
			if ((a[i] + a[20 - i]) % 20 == 0 && (a[i] + a[20 - i] < ans)) {
				ans = a[i] + a[20 - i];
			}
		}
	}
	if (a[10] != 0 && a[21] != 0) {
		if (a[10] + a[21] < ans) {
			ans = a[10] + a[21];
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

