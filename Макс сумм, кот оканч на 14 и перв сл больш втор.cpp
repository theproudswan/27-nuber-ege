// Максимальная сумма, которая оканчивается на 14, но первое слагаемое (которое пришло раньше) больше второго
//

#include <iostream>

using namespace std;

int main()
{
	int n, buf, ans = 0, ans1 = 0, ans2 = 0, ans3 = 0;
	int a[100] = { 0 };
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> buf;
		
		if (buf % 100 <= 4) {
			if (buf < a[14 - buf % 100]) {
			ans = buf + a[14 - buf % 100];
			}
		}
		else if ((buf % 100 >= 5) && (buf % 100 < 10)) {
			if(buf<a[14 - buf % 10])
			ans1 = buf + a[14 - buf % 10];
		}
		else if ((buf % 100 >= 10) && (buf % 100 <= 14)) {
			if(buf<a[14 - buf % 100])
			ans2 = buf + a[14 - buf % 100];
		}
		else {
			if(buf<a[114 - buf % 100])
			ans3 = buf + a[114 - buf % 100];
		}
			a[buf % 100] = buf;
	}
	cout << endl << std::max(ans,std::max(ans1,std::max(ans2,ans3))) << endl;
	return 0;
}

