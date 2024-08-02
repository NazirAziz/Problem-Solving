/*
https://codeforces.com/problemset/problem/706/B
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int shop[n];
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; ++i){
        cin >> shop[i];
        mn = min(mn, shop[i]);
        mx = max(mx, shop[i]);
    }

    long long price[mx + 1]{};

    for (int i = 0; i < n; ++i)
       price[shop[i]]++;
    for (int i = mn + 1; i <= mx; ++i)
        price[i] += price[i - 1];

    int day; cin >> day;
    while (day--){
        int money; cin >> money;
        if (money >= mx)
            cout << n << "\n";
        else if (money < mn)
            cout << "0\n";
        else
            cout << price[money] << "\n";

    }
}
