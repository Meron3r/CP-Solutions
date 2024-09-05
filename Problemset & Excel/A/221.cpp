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

    vector<int> p(n); p[0] = n;
    for (int i = 1; i < n; i++)
        p[i] = i;
    
    for (int i = 0; i < n; i++)
        cout << p[i] << " ";
    
    cout << '\n';
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}