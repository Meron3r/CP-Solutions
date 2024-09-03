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
    vector<int> a(3);
    for (int i = 0; i < 3; i++) 
        cin >> a[i];

    int mn =  1e5;
    for(int i = 1; i <= 10; i++)
    {
        int dis = 0;
        for(int j = 0 ; j < 3; j++)
            dis+=abs(i-a[j]);
        
        mn = min(dis, mn);
    }

    cout << mn << '\n';
}

int main() {
    int t = 1; cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}