#include <iostream>
using namespace std;

int main() {
    int n, l, r, l0 = 0, r0 = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
       cin >> l >> r;
        if (r == 0) r0++;
        if (l == 0) l0++; 
    }
    
    cout << min(l0, n - l0) + min(r0, n - r0) << "\n";
    
    return 0;
}