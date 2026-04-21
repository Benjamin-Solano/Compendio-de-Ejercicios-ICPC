#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, pasos = 0, pos = 1, t;
    cin >> n >> m;

    while (m--) {
        cin >> t;

        if (t > pos)
            pasos += t - pos;
        else if (t < pos)
            pasos += n - pos + t;
        pos = t;
    }

    cout << pasos << "\n";
    return 0;
}