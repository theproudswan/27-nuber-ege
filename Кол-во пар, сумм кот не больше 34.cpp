// Колиество пар, сумма которых не больше 34
//

#include <iostream>

using namespace std;

int main()
{
	int a[35] = { 0 };
	int n, buf;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> buf;
		if (buf < 35) {
			for (int j = buf+1; j < 34 - buf; ++j) {
				ans += a[j];
			}
			a[buf]++;
		}
	}
	cout << endl << ans << endl;
    return 0;
}

