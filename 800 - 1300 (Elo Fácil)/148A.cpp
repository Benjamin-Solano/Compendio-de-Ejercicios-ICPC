#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d;
    vector<int> castigo(4);
    for(int i = 0; i < 4; i++) {
        cin >> castigo[i];
    }
    cin >> d;

    auto menor = min_element(castigo.begin(), castigo.end());
    if (*menor == 1) {
        cout << d << "\n";
        return 0;
    } else if (*menor > d) {
        cout << 0 << "\n";
        return 0;
    }

    vector<int> sinCastigo;
    for(int i = 1; i <= d; i++) {

        if (i % castigo[0] != 0 && i % castigo[1] != 0 && i % castigo[2] != 0 && i % castigo[3] != 0) {
            sinCastigo.push_back(i);
        }

    }

    cout << d - sinCastigo.size();

    return 0;
}