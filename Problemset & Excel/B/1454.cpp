#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <limits>

using namespace std;

#define cin input
#define cout output
typedef long long ll;

ifstream input("D:/CP/input.txt");
ofstream output("D:/CP/output.txt");

void solve() {
    int n; cin >> n;

    vector<int> bd(n);
    unordered_map<int, int> fq;
    unordered_map<int, int> fo;
    for (int i = 0; i < n; i++) 
    {
        cin >> bd[i];
        int bid = bd[i];
        if (fq.find(bid) == fq.end()) 
        {
            fq[bid] = 0;
            fo[bid] = i + 1;
        }
        fq[bid]++;
    }

    int mn = numeric_limits<int>::max();
    int wi = -1;

    for (const auto& pair : fq) {
        if (pair.second == 1 && pair.first < mn) {
            mn = pair.first;
            wi = fo[pair.first];
        }
    }

    cout << wi << '\n';
}

int main() {
    int t; cin >> t;
    while (t--) solve();

    input.close();
    output.close();

    return 0;
}
