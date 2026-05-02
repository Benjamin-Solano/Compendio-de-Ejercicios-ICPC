#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int primos[16] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
    int n, m;

    cin >> n >> m;

    if(n < m) {
        for(int i = 0; i < 16; i++) {
            if (n == primos[i] && m == primos[i+1]){
                cout << "YES\n";
                return 0;
            }
        }
        cout << "NO\n";
        return 0;
    }

    cout << "NO\n";
    return 0;
}