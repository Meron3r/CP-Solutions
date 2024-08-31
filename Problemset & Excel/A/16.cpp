#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

#define cin input
#define cout output
typedef long long ll;

ifstream input("D:/CP/input.txt");
ofstream output("D:/CP/output.txt");

void solve()
{
    int n, m; cin >> n >> m;

    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            cout << "NO" << '\n';
            return;
        }
        for (int j = 0; j < m - 1; j++)
        {
            if (a[i][j] != a[i][j + 1] || a[i + 1][j] != a[i + 1][j + 1])
            {
                cout << "NO" << '\n';
                return;
            }
        }
    }

    for (int j = 0; j < m - 1; j++)
        {
            if (a[0][j] != a[0][j + 1])
            {
                cout << "NO" << '\n';
                return;
            }
        }

    cout << "YES" << '\n';
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}