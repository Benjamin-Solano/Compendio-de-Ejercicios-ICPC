#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    int min_moves = (n + 1) / 2;
    int max_moves = n; 

    int first_multiple = ((min_moves + m - 1) / m) * m;
    
    if (first_multiple <= max_moves) {
        cout << first_multiple << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}