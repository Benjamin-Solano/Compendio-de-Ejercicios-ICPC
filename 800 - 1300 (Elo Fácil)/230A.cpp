#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, n, x, y;
    vector<pair<int,int>> dragons;
    bool vive = true;

    cin >> s >> n;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        dragons.emplace_back(x, y); 
    }

    sort(dragons.begin(), dragons.end());

    for(int i = 0; i < n && vive; i++) {
        if (s > dragons[i].first) {
            s += dragons[i].second;
        } else {
            vive = false;
        }
    }

    vive ? cout << "YES\n" : cout << "NO\n";

    return 0;
}