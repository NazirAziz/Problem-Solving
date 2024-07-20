/*
https://www.codechef.com/problems/SUPINC
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	    int n, k, x; cin >> n >> k >> x;
	    if (k > 32){
	        cout << "No\n";
	        continue;
	    }
	        
	    unsigned int a = 1;
	    a = (a << (k - 1));
	    if (a <= x)
	        cout << "Yes\n";
	    else
	        cout << "No\n";
	}

}
