#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string w;
    cin >> w;
    int n = w.size();

    int upperRest = 0;
    for (int i = 1; i < n; i++)
        if (isupper(w[i])) upperRest++;

    bool allUpper = isupper(w[0]) && (upperRest == n - 1);
    bool firstLowerRestUpper = islower(w[0]) && (upperRest == n - 1);

    if (allUpper || firstLowerRestUpper) {
        for (char& c : w)
            c = isupper(c) ? tolower(c) : toupper(c);
    }

    cout << w << '\n';
    return 0;
}