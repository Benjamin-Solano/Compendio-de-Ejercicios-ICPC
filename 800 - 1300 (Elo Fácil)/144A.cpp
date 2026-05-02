#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> soldados(n);
    int maxVal = -1, minVal = 101;
    int maxIdx = 0, minIdx = 0;

    for(int i = 0; i < n; i++) {
        cin >> soldados[i];
        if(soldados[i] > maxVal) {
            maxVal = soldados[i];
            maxIdx = i;
        }
        if(soldados[i] <= minVal) {
            minVal = soldados[i];
            minIdx = i;
        }
    }

    int swaps = maxIdx + (n - 1 - minIdx);
    if(maxIdx > minIdx) swaps--;

    cout << swaps << "\n";

    return 0;
}