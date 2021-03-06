// Минимальное произведение, которое кратно 6
//

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int min = 10001, min3 = 10001, min2 = 10001, min6 = 10001,min01=10001, buf;
	for (int i = 0; i < n; ++i) {
		cin >> buf;

		if ((buf % 6==0) && (buf <= min6)) { // Ищем минимальное кратное 6
			if (buf == min6) {
				min = buf;
			}
			min6 = buf;
		}
		else if ((buf < min) && (buf % 2 != 0) && (buf % 3 != 0)) {
			min = buf;
		}
		else if ((buf % 3 == 0) && (buf < min3)) { // Ищем минимальное кратное 3
			min3 = buf;
		}
		else if ((buf % 2 == 0) && (buf < min2)) { // Ищем минимальное кратное 2
			min2 = buf;
		}
	}

	if (min != 10001 && min2 != 10001 && min3 != 10001 && min6 != 10001) {
		cout << std::min(min*min6, min2*min3) << endl;
	}
	else if ((min != 10001 && min6 != 10001)) {
		cout << min6 * min << endl;
	}
	else if (min2 != 10001 && min3 != 10001) {
		cout << min2 * min3 << endl;
	}
	else {
		cout << -1 << endl;
	}
    return 0;
}

