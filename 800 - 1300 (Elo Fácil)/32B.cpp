#include <iostream> 
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    for(int i = 0; i < s.length();i++) {
        if(s[i] == '.') {
           cout << 0;
        } else {
            if(s.substr(i, 2) == "-.") {
                cout << 1;
            } else if (s.substr(i, 2) == "--") {
                cout << 2;
            }
            i++;
        }
    }

    return 0;
}