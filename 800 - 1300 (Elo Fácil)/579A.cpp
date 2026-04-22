#include <iostream> 

using namespace std;

int popcount_manual(int x) {
    int count = 0;
    while (x > 0) {
        count += x & 1;
        x >>= 1;
    }
    return count;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double x;
    cin >> x;

    cout << popcount_manual(x) << "\n";
   
    return 0;
}