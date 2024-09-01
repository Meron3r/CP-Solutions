#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define cin input
#define cout output
typedef long long ll;

ifstream input("D:/CP/input.txt");
ofstream output("D:/CP/output.txt");

void solve()
{
    int n, x; cin >> n;
	string s; cin >> s;

	x = n / 2 - count(s.begin(), s.end(), 'x');
	for (int j = 0; j < abs(x); j++)
	{
		for (int i = 0; i < n; i++)
			if (x > 0 && s[i] == 'X')
			{
				s[i] = 'x';
				break;
			}
			else if (x < 0 && s[i] == 'x')
			{
				s[i] = 'X';
				break;
			}
	}

	cout << abs(x) << '\n' << s << '\n';
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}