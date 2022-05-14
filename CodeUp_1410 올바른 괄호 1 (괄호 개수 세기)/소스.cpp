#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '(')
			cnt1++;
		else if (str[i] == ')')
			cnt2++;
	}
	cout << cnt1 << ' ' << cnt2;
	return 0;
}