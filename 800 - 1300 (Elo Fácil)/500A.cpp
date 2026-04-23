#include <iostream> 
#include <vector>

using namespace std;

int main() {


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n = 0, t = 0, j = 1;
    cin >> n >> t;

    vector<int> v(n + 1 );

    for(int i = 1; i < n; i++) {
        cin >> v[i];
    }

    
    while (j < t) {
        j = j + v[j];
    }

    cout << (j == t ? "YES" : "NO") << "\n";

    return 0;
}