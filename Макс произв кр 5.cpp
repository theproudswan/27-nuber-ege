// Максимальное произведение, которое кратно 5
//


#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int max5 = 0, max = -1, buf = 0;
	for (int i = 0; i < n; ++i) {
		cin >> buf;
		if ((buf % 5 == 0) && (buf > max)) {
			if (max5 > max) {
				max = max5;
			}max5 = buf;
		}
		else if (buf > max) {
			max = buf;
		}
	}
	if ((max5 != 0) && (max != 0)) {
		cout << max5 * max << endl;
	}
	else {
		cout << -1 << endl;
	}
	return 0;
}

