// Минимальная сумма, которая кратна 3
//

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int min = 10001, min2 = 10001, buf, min0 = 10001, min1 = 10001, min3;
	for (int i = 0; i < n; ++i) {
		cin >> buf;
		if (((buf < min)||(buf<min0)) && (buf % 3 == 0)) {
			if (min0 < min) {
				min = min0;
			}
			else {
				min0 = min;
			}
			min = buf;
		}
		else if ((buf < min1) && (buf % 3 == 1)) {
			min1 = buf;
		}
		else if ((buf < min2) && (buf % 3 == 2)) {
			min2 = buf;
		}
	}

	min3 = std::min(min + min0, min1 + min2);
	if ((min != 10001 && min0 != 10001) && (min3<(min1 + min2))) {
		cout << min + min0 << endl;
	}
	else if ((min1 != 10001 && min2 != 10001) && (min3<=(min + min0))) {
		cout << min1 + min2 << endl;
	}
	else {
		cout << -1 << endl;
	}
	return 0;
}

