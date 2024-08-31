#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream input("D:/CP/input.txt");
ofstream output("D:/CP/output.txt");

#define cin input
#define cout output
typedef long long ll;

int luckys(int n)
{
    if (n == 0) return 0;
    int digit = n % 10;
    if (digit == 4 || digit == 7)
        return 1 +  luckys(n / 10);
    else
        return 0 + luckys(n / 10);
}

void solve()
{
    int n, k; cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int cnt = 0;
    for (auto i : a)
        if (luckys(i) <= k)
            cnt++;
    
    cout << cnt << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while(t--) solve();

    input.close();
    output.close();

    return 0;
}