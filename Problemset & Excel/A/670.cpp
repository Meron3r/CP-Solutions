#include <iostream>
#include <fstream>

using namespace std;

#define cin input
#define cout output
typedef long long ll;

ifstream input("D:/CP/input.txt");
ofstream output("D:/CP/output.txt");

void solve()
{
    int n; cin >> n;

    int w = n / 7;
    int rm = n % 7;

    int mn = w * 2;
    int mx = mn;

    if (rm > 0) {
        mx += min(rm, 2);
        if (rm <= 5) {
            mn += 0;
        } else {
            mn += 1;
        }
    }

    cout << mn << " " << mx << '\n';
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}