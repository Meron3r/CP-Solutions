#include <iostream>
#include <fstream>
#include <vector>
#include <map>

using namespace std;

#define cin input
#define cout output
typedef long long ll;

ifstream input("D:/CP/input.txt");
ofstream output("D:/CP/output.txt");

void solve()
{
    int k; cin >> k;

    map<char, int> mp;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            char c; cin >> c;
            if (c != '.')
            {
                mp[c]++;
                
                if (mp[c] > k * 2)
                {
                    cout << "NO" << '\n';
                    return;
                }
            }
        }
    }

    cout << "YES" << '\n';
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}