#include <iostream> 

using namespace std;

int main() {
	int t, n, x, y;
	cin >> t;
	
	while(t--) {
	    cin >> n >> x >> y;
	    
	    ( y == 0 || n * x == y || ((n * x) - y) % x == 0 && n * x >= y ? cout << "YES" << endl : cout << "NO" << endl);  
	}

    return 0;
}

/*

Test Score

In a test, there are NN problems, each carrying XX marks.
In each problem, Chef either received XX marks or 00 marks.

Determine whether is it possible for Chef to achieve exactly YY marks.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of three integers N,X,N,X, and YY, the number of problems, the maximum score for each problem, and the score Chef wants.

Output Format

For each test case, output YES if Chef can achieve exactly YY marks, NO otherwise.

*/
