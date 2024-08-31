#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

#define cin input
#define cout output
typedef long long ll;

ifstream input("a:/CP/input.txt");
ofstream output("a:/CP/output.txt");

void solve()
{
    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    int s, t; cin >> s >> t;

    if (s > t) swap(s, t);
    
    int d = 0;
    for (int i = s - 1; i < t - 1; i++)
        d += a[i];

    int cd = 0;
    for (int i = t - 1; i != s - 1; i = (i + 1) % n)
        cd += a[i];

    cout << min(d, cd) << '\n';
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}