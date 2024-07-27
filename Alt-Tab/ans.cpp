/*
https://www.codechef.com/problems/ALTTAB
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	set<string> ss;
	stack<string> st;
	int n; cin >> n;
	string temp;
	while (n--){
	    cin >> temp;
	    ss.insert(temp);
	    st.push(temp);
	}
	while (!st.empty()){
	    string buffer = st.top();
	    int bsize = buffer.size();
	    if (ss.find(buffer) != ss.end())
	        cout << buffer[bsize - 2] << buffer[bsize - 1];
	    st.pop();
	    ss.erase(buffer);
	}
	

}
