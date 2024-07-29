/*
https://www.codechef.com/problems/LOSTMAX
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while (t--){
	    string s; getline(cin >> ws, s);
	    stringstream ss(s);
	    int num;
	    int largest = 0, second_large = 0;
	    int size = 0;
	    while (ss >> num){
	        size++;
	        if (num > largest){
	            second_large = largest;
	            largest = num;
	        }else if (num > second_large)
	            second_large = num;
	    }
	    size--;
	    if (largest == size)
	        cout << second_large << "\n";
	    else
	        cout << largest << "\n";
	}

}
