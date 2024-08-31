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
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    for(int i = 0; i < n; i++)
    {
        int x = 0;
        for(int j = 0; j < n; j++)
            if(a[i] < a[j])
                x++;
        
        cout << x + 1 << " ";
    }

    cout << '\n';
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}