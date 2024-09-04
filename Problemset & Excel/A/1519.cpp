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
    int r,b,d; cin >> r >> b >> d;

    int maxi = max(r, b);
    int mini = min(r, b);

    int res = maxi / mini;

    if(maxi % mini == 0) 
        res = res - 1;
    
    if(res <= d)
       cout << "YES" << '\n';
    else
       cout << "NO" << '\n';
       
}

int main() {
    int t = 1; cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}