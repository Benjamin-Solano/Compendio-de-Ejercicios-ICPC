#include <iostream>

using namespace std;

// ELO 1000
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    cout << max({a+b+c, a+b*c, a*b*c, a*b+c, (a+b)*c, a*(b+c)}) << '\n';

    return 0;
}