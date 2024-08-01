/*
https://www.codechef.com/problems/XORNEY
This one made me cry
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while (t--){
	    unsigned long long l, r; scanf("%lld %lld", &l, &r);
	    long long resultL = l % 2;
	    long long resultR = r % 2;
	    unsigned long long result;
	    long double e = 2.0;
	    if(resultL == 1 && resultR == 1){
	        result = (r - l) / 2;
	        if ((result + 1) % 2 == 0)
	            cout << "Even\n";
	        else
	            cout << "Odd\n";
	    }
	    else if (resultL == 0 && resultR == 0){
	        result = floor(((r - l) + 1) / e);
	        if (result % 2 == 0)
	            cout << "Even\n";
	        else
	            cout << "Odd\n";
	    }else if(resultL == 1 && resultR == 0){
	        result = ((r - l) + 1) / 2;
	        if (result % 2 == 0)
	            cout << "Even\n";
	        else
	            cout << "Odd\n";
	    }else{
	        result = ceil((r - l) / e);
	        if (result % 2 == 0)
	            cout << "Even\n";
	        else
	            cout << "Odd\n";
	    }
	   // cout << result << "\n";
	}

}
