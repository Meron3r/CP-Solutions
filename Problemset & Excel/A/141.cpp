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
    string a, b, ab, c; cin >> a >> b >> c;

    ab = a + b;
    sort(ab.begin(), ab.end());
    sort(c.begin(), c.end());
    
    cout << (ab == c ? "YES" : "NO") << '\n';
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}