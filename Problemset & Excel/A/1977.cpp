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
    int a, b; cin >> a >> b;

    if(a >= b)
    {
        if((a - b) % 2 == 0)
            cout << "YES" << '\n';
        
        else cout << "NO" << '\n';
    }

    else cout << "NO" << '\n';
}

int main() {
    int t = 1; cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}