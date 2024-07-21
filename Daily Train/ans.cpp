/*
https://www.codechef.com/problems/DAILY
*/
#include <bits/stdc++.h>
using namespace std;
int fac (int num){
    if (num == 0)
        return 1;
    int ans = 1;
    for (int i = 2; i <= num; ++i)
        ans *= i;
    return ans;
}
int main() {
	// your code goes here
	int friends, cars; cin >> friends >> cars;
	int c = 0;
	while (cars--){
	    string s; cin >> s;
	    int start = 0, end = 53;
	    while (start < end){
	        int currentCarFree = 0;
	        int a = 4;
	        while (a--){
	            if (s[start] == '0')
	                currentCarFree++;
	            start++;
	        }
	        a = 2;
	        while (a--){
	            if (s[end] == '0')
	                currentCarFree++;
	            end--;
	        }
	        if (currentCarFree >= friends){
	            c += (fac(currentCarFree) / (fac(friends) * fac(currentCarFree - friends)));
	        }    
	        //cout << "start = " << start << "\n";
	        //cout << "end = " << end << "\n";
	        //cout << "currentCarFree = " << currentCarFree << "\n";
	    }
	}
	cout << c << "\n";

}
