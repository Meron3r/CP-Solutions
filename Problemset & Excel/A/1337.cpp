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
    int a, b, c, d; cin >> a >> b >> c >> d;

    cout << b << " " << c << " " << c << '\n';
}

int main() {
    int t = 1; cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}