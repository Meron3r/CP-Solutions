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
 
    int l = 0, r = 0;
    for (int i = 0; i < n; ++i) 
    {
        int a, b; cin >> a >> b;
        l += a; r += b;
    }
    
    cout << min(l, n - l) + min(r, n - r) << '\n';
}
 
int main() {
    int t = 1; //cin >> t;
    while (t--) solve();
 
    input.close();
    output.close();
 
    return 0;
}