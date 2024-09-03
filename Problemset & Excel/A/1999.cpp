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
    int n; cin >> n;
    cout << n / 10 + n % 10 << '\n';
}


int main() {
    int t = 1; cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}