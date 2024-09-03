#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

#define cin input
#define cout output
typedef long long ll;

ifstream input("D:/CP/input.txt");
ofstream output("D:/CP/output.txt");

void solve()
{
    int n, k; cin >> n >> k;

    vector<int> a(k);
    vector<int> v;
    for (int i = 0; i < k * n; i++)
        v.push_back(i + 1);
    
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
        v.erase(remove(v.begin(), v.end(), a[i]), v.end());
    }

    for (int i = 0; i < k; i++)
    {
        cout << a[i] << ' ';
        for (int j = 0; j < n - 1; j++)
        {
            cout << v[0] << ' ';
            v.erase(v.begin());
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