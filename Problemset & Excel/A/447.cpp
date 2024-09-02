#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_set>

using namespace std;

#define cin input
#define cout output
typedef long long ll;

ifstream input("D:/CP/input.txt");
ofstream output("D:/CP/output.txt");

void solve()
{
    int p, n; cin >> p >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
        cin >> numbers[i];

    unordered_set<int> buckets;

    for (int i = 0; i < n; ++i) 
    {
        int bucket = numbers[i] % p;
        if (buckets.find(bucket) != buckets.end()) 
        {
            cout << i + 1 << '\n';
            return;
        }
        
        buckets.insert(bucket);
    }

    cout << -1 << '\n';
}

int main() {
    int t = 1; //cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}