/*
Chef gave you a string 𝑆S of size 𝑁N which contains only lowercase English letters and asked you
to find the length of the longest substring of the stringwhich satisfies the following condition:
•	Each character 𝛽β should appear at most 𝑓(𝛽)f(β) times.
Here 𝑓(𝛽)f(β) denotes the index of the character 𝛽β in the alphabet series. For example 𝑓(′𝑎′)f(′a′) = 11, 𝑓(′𝑏′)f(′b′) = 22 and so on.
Note: A substring of a string is a contiguous subsequence of that string.


*/


#include <bits/stdc++.h>
using namespace std;
int howManyTimesShouldBeRepeated(char c){
    return c - 'a' + 1;
}
int main() {
	// your code goes here
	int t; cin >> t;
	while (t--){
	    int n; cin >> n;
	    string str; cin >> str;

	    int alphabit[26]{0};
	    int c  = 0;
	    int mx = 0;

	    for (int i = 0; i < n; ++i){
	        int index = str[i] - 'a';
	        alphabit[index]++;
	        if (alphabit[index] > howManyTimesShouldBeRepeated(str[i])){
                for (int j = 0; j < 26; ++j)
                    alphabit[j] = 0;
	            c = 1;
	            int k = i - 1;
	            int count = 1;
	            int numberShouldBe = howManyTimesShouldBeRepeated(str[i]);
	            while (k >= 0 && count <= numberShouldBe){
                    alphabit[str[k ]- 'a']++;
                    if (str[k] == str[i])
                        count++;
                    if (count > numberShouldBe)
                        break;
                    c++;
                    k--;
	            }
	            alphabit[index] = howManyTimesShouldBeRepeated(str[i]);
	        }else{
	            c++;
	        }
	        mx = max (mx, c);
	    }
	    cout << mx << "\n";
	}

}
