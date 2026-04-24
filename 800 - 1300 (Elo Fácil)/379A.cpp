#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int hours = a;
    int stubs = a;

    while (stubs >= b) {
        int nuevas   = stubs / b;
        int sobrantes = stubs % b;
        hours += nuevas;
        stubs = nuevas + sobrantes;
    }

    cout << hours << "\n";
    return 0;
}