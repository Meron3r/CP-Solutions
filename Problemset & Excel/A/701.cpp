#include <iostream>
#include <fstream>
#include <deque>
#include <algorithm>
#include <utility>

using namespace std;

#define cin input
#define cout output
typedef long long ll;

ifstream input("D:/CP/input.txt");
ofstream output("D:/CP/output.txt");

void solve()
{
    int n; cin >> n;

    deque<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());
    for (int i = 0; i < n / 2; i++)
    {
        cout << a.front().second + 1 << " " << a.back().second + 1 << "\n";
        a.pop_front(); a.pop_back();
    }
}


int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}