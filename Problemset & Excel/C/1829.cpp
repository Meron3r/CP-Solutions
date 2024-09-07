#include <iostream>
#include <fstream>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

#define cin input
#define cout output
typedef long long ll;

ifstream input("D:/CP/input.txt");
ofstream output("D:/CP/output.txt");

void solve()
{
    int n; cin >> n;
    
    int a = 200001, b = 200001, c = 200001;
    while (n--) 
    {
        int x; string s; cin >> x >> s;

        if (s == "11") c = min(c, x);
        else if (s == "01") 
            b = min(b, x);
        else if (s == "10") 
            a = min(a, x);
    }

    if((a > 200000 || b > 200000) && c > 200000) 
        cout << -1 << '\n';
    else if(c > 200000) 
        cout << a + b << '\n';
    else if(a > 200000 || b > 200000) 
        cout << c << '\n';
    else 
        cout << min(a + b, c) << '\n';
}

int main()
{
    int t; cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}
