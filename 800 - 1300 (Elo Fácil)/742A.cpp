#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    if (n == 0) {
        cout << 1 << "\n";
        return 0;
    }

    int pattern[] = {6, 8, 4, 2};

    cout << pattern[n % 4] << "\n";

    return 0;
}