#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    long long total_bill = 0;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        total_bill += p;
    }

    long long total_collected = 0;
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        total_collected += a;
    }

    long long tip = (total_bill * 10 + 99) / 100;  

    long long required = total_bill + tip;

    if (total_collected >= required) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
