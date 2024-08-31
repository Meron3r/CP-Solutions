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

    if (n % 2 == 0)
        cout << n * n / 2 << '\n';
    else
        cout << (n * n + 1) / 2 << '\n';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0 && j % 2 == 0 || i % 2 == 1 && j % 2 == 1)
                cout << 'C';
            else
                cout << '.';
        }
        cout << '\n';
    }
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}