#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

#define cin input
#define cout output
typedef long long ll;

ifstream input("D:/CP/input.txt");
ofstream output("D:/CP/output.txt");

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int pos1 = -1, posn = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1) pos1 = i;
        if (a[i] == n) posn = i;
    }

    int d1 = max(pos1, n - 1 - pos1);
    int dn = max(posn, n - 1 - posn);
    int mx = max(d1, dn);

    cout << mx << '\n';
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}