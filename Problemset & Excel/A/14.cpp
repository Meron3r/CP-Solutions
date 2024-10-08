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
    int tp = 100 , btm = -1 , lf = 100 , r = -1 ;
    for(int i = 0 ; i < n ; i++) 
    {
        cin >> a[i];
        for (int j = 0 ; j < m ; j++) 
        {
            if (a[i][j] == '*') 
            {
                tp = min(tp , i) ;
                btm = max(btm , i ) ;
                lf = min(lf , j) ;
                r = max(r , j) ;
            }
        }
    }
 
    for (int i = tp ; i <= btm ; i++) 
    {
        for (int j = lf ; j <= r ;j++)
            cout << a[i][j] ;
        cout <<'\n' ;
    }
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}