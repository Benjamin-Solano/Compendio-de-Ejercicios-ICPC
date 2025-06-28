#include <iostream>
using namespace std;

int main() {
	
	float a, b, c; int t;
	cin>>t;
	while(t--) {
	    cin >> a >> b >> c;
	    ((a+b) / 2 > c ? cout << "YES" << endl : cout << "NO" << endl);
	}
    return 0;
}

/*

Problem lvl 500: reater Average

You are given 33 numbers A,B, and C.

Determine whether the average of A and BB is strictly greater than C or not?

NOTE: Average of A and B is defined as (A+B)/2. For example, average of 5 and 9 is 7, average of 5 and 8 is 6.5
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of 33 integers A,B, and C.

Output Format

For each test case, output YES if average of A and B is strictly greater than C, NO otherwise.

*/
