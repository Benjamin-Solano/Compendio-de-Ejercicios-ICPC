#include <iostream> 
#include <string>
using namespace std;

int main() {


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long n;
    int t;
    string d = "";
    cin >> n >> t;


    if (t > 9 && n == 1) {
        cout << -1 << endl;
        
    } else {

        if (t == 10) {
            for(int i = 0; i < n-1; i++) {
                d += '1';
            }
            d = d + '0';
        }

        else {
            for(int i = 0; i < n; i++) {
                d += to_string(t);
            }
        }
        
        cout << d << "\n";
    }

    return 0;
}