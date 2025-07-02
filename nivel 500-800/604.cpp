#include <iostream>
using namespace std;

int main() {
	int t, n, x, i;
	
	cin >> t;
	
	while(t--) {
	    int contador = 0;
	    cin >> n >> x;
	    
	    while(n--) {
	        cin >> i;
	        if (i >= x) 
	            contador++;
	    }
	    cout << contador << endl;
	}

    return 0;
}

/*

Elections in Chefland

Election season has started in Chefland and the election commission wants to know the count of eligible voters.

There are NN people in Chefland where the age of the ithith person in AiAi​.
Given that a person needs to be at least XX years old to vote, find the number of eligible voters.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of multiple lines of input.
        The first line of each test case contains two space-separated integers NN and XX — the number of people in Chefland, and the minimum age required for a person to vote in Chefland.
        The next line contains NN space-separated integers, where the ithith integer denotes the age of the ithith person.

Output Format

For each test case, output on a new line, the number of eligible voters in Chefland

*/
