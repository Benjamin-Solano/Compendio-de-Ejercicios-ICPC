#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    string s, equipo1 = "", equipo2 = "";
    int n = 0,goles1 = 0, goles2 = 0;
    
    cin >> n;
    while(n--) {
        cin >> s;
        if (equipo1.empty() || equipo1 == s) {
            equipo1 = s;
            goles1++;
        } else {
            equipo2 = s;
            goles2++;
        }
    }

    goles1 > goles2 ? cout << equipo1 << "\n" : cout << equipo2 << "\n";

    return 0;
}