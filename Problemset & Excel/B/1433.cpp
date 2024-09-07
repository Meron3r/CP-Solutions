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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int l = -1, r = -1;
    for (int i = 0; i < n; ++i) 
    {
        if (a[i] == 1) 
        {
            if (l == -1) l = i;
            r = i;
        }
    }

    int cnt = 0;
    for (int i = l; i <= r; ++i)
        if (a[i] == 0)
            cnt++;

    cout << cnt << '\n';
}

int main() 
{
    int t; cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}
