#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

#define cin input
#define cout output
typedef long long ll;

ifstream input("D:/CP/input.txt");
ofstream output("D:/CP/output.txt");

void solve() {
    int n; cin >> n;

    vector<vector<int>> a(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            cin >> a[i][j];
    
    vector<int> gc;
    
    for (int i = 0; i < n; ++i) 
    {
        bool g = true;
        for (int j = 0; j < n; ++j) 
        {
            if (a[i][j] == 1 || a[i][j] == 3) 
            {
                g = false;
                break;
            }
        }
        if (g) 
            gc.push_back(i + 1);
    }
    
    cout << gc.size() << '\n';
    for (int i : gc)
        cout << i << ' ';
    cout << '\n';
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}