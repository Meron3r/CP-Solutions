#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

#define cin input
#define cout output
typedef long long ll;

ifstream input("D:/CP/input.txt");
ofstream output("D:/CP/output.txt");

void solve()
{
    int n, x; cin >> n >> x;

    vector<int> a(n); int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum == 0) 
    {
        cout << 0 << '\n';
        return;
    }

    int mn = abs(sum) / x;
    if (abs(sum) % x != 0)
        mn++;

    cout << mn << '\n';
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}