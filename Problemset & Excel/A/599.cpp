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
    int a, b, c; cin >> a >> b >> c;

    int r1 = a + b + c;
    int r2 = 2 * (a + b); 
    int r3 = 2 * (a + c);
    int r4 = 2 * (b + c);

    cout << min({r1, r2, r3, r4}) << '\n';
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}