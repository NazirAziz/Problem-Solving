/*
https://www.codechef.com/problems/UNCHANGEDOR
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while (t--){
	    int n; cin >> n;
	    int l = floor(log2(n));
	    int a = pow(2, l);
	    int ans = a - (l + 1);
	    ans += (n - a);
	    cout << ans << "\n";
	}

}
