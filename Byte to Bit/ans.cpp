/*
https://www.codechef.com/problems/BITOBYT
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
	int t; cin >> t;
	while (t--){
	    ll n; cin >> n;
	    n--;
	    ll bit = 0, nibble = 0, byte = 0;
	    ll result = n / 26;
	    result = pow (2, result);
	    ll rem = n % 26;
	    if (rem >= 10)
	        byte = result;
	    else if (rem >= 2)
	        nibble = result;
	    else
	        bit = result;
	    cout << bit << " " << nibble << " " << byte << "\n";
	    
	}

}
