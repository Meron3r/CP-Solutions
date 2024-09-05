#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

#define cin input
#define cout output
typedef long long ll;

ifstream input("D:/CP/input.txt");
ofstream output("D:/CP/output.txt");

bool islucky(string a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != '4' && a[i] != '7')
            return false;
    }

    return true;
}

bool sum(string a)
{
    int sum = 0;

    for (int i = 0; i < a.size() / 2; i++)
        sum += a[i] - '0';
    for (int i = a.size() / 2; i < a.size(); i++)
        sum -= a[i] - '0';
    
    return sum == 0;
}

void solve()
{
    int n; cin >> n;

    string a; cin >> a;

    if (islucky(a) && sum(a))
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}