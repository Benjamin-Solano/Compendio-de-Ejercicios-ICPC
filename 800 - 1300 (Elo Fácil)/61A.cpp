#include <iostream>

using namespace std;


string sumaBinarios(string a, string b) {
    string result="";
    for(int i = 0; i<a.size();  i++) {
        if(a[i] == b[i]) {
            result += "0";
        } else {
            result += "1";
        }
    }
    return result;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    cout << sumaBinarios(a,b) << "\n";

    return 0;
}