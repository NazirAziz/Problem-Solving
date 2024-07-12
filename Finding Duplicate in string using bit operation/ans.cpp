#include <bits/stdc++.h>
using namespace std;
int main() {

    string dup; cin >> dup;
    int core = 0;

    for (int i = 0; dup[i] != '\0'; ++i){
        if ((core & (1 << (dup[i] - 97))))
            cout << dup[i] << "\n";
        else{
            core = core | (1 << dup[i] - 97);
            }
    }
}
