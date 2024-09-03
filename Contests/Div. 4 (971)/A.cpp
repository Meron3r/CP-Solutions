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
    int a, b; cin >> a >> b;

    int mn = 100;
    for (int i = min(a, b); i <= max(a, b); i++)
        mn = min(mn, (i - a) + (b - i));
    
    cout << mn << '\n';
}

int main() {
    int t = 1; cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}