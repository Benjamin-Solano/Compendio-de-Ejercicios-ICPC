#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double t, n;
	cin >> t;
	
	while(t--) {
	    cin >> n;
	    cout << ceil(n / 4) << endl;
	}

    return 0;
}

/*

Minimum Cars required

A single car can accommodate at most 44 people.

NN friends want to go to a restaurant for a party. Find the minimum number of cars required to accommodate all the friends.
Input Format

    The first line contains a single integer TT - the number of test cases. Then the test cases follow.
    The first and only line of each test case contains an integer NN - denoting the number of friends.

Output Format

For each test case, output the minimum number of cars required to accommodate all the friends.


*/
