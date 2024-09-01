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
    for (int i = 0; i < n; ++i) 
        cin >> a[i];

    int s = 0;
    for (int i = 0; i < n; ++i) 
        s += a[i];

    int ans = 0;
    for (int i = 1; i <= 5; ++i) 
        if ((s + i - 1) % (n + 1) != 0)
            ans++;

    cout << ans << '\n';


}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}


