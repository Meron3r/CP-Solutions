#include <iostream>
#include <fstream>

using namespace std;

#define cin input
#define cout output
typedef long long ll;

ifstream input("D:/CP/input.txt");
ofstream output("D:/CP/output.txt");

void solve() {
    ll n, k; cin >> n >> k;
    
    if (n % 2 == 0 || n >= k && (n - k) % 2 == 0) 
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}
