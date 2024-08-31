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
    
    int ans = 0, cnt;
    for (int i = 0; i < n; i++)
    {
        cnt = 0; bool s = false;
        for (int j = 0; j < m && !s; j++)
        {
            cnt += (a[i][j] == '.');
            s = (a[i][j] == 'S');
        }

        ans += !s * cnt;
        if (!s)
            for (int j = 0; j < m && !s; j++)
                a[i][j] = '#';
    }
    for (int i = 0; i < m; i++)
    {
        cnt = 0; bool s = false;
        for (int j = 0; j < n && !s; j++)
        {
            cnt += (a[j][i] == '.');
            s = (a[j][i] == 'S');
        }

        ans += !s * cnt;
        if (!s)
            for (int j = 0; j < n && !s; j++)
                a[j][i] = '#';
    }

    cout << ans << '\n';
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}