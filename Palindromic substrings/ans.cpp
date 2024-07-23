/*
https://www.codechef.com/problems/STRPALIN
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while (t--){
	    string a, b; cin >> a >> b;
	    int set = 0;
	    int n = a.size();
	    for (int i = 0; i < n; ++i)
	        set |= (1 << (a[i] - 97));
	    bool flag = false;
	    n = b.size();
	    for (int i = 0; i < n; ++i){
	        if ((set & (1 << b[i] - 97))) {
	            flag = true;
	            break;
	        }
	    }
	    if (flag)
	        cout << "Yes\n";
	    else
	        cout << "No\n";
	}
	

}
