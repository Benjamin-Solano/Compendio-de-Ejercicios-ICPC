#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        cout << (n + 5) / 6 * x << endl;
    }
    return 0;
}

/*
Subscriptions

A new TV streaming service was recently started in Chefland called the Chef-TV.

A group of NN friends in Chefland want to buy Chef-TV subscriptions. We know that 66 people can share one Chef-TV subscription. Also, the cost of one Chef-TV subscription is XX rupees. Determine the minimum total cost that the group of NN friends will incur so that everyone in the group is able to use Chef-TV.
Input Format

    The first line contains a single integer TT — the number of test cases. Then the test cases follow.
    The first and only line of each test case contains two integers NN and XX — the size of the group of friends and the cost of one subscription.

Output Format

For each test case, output the minimum total cost that the group will incur so that everyone in the group is able to use Chef-TV.
*/
