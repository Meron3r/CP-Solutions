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
    
    
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}