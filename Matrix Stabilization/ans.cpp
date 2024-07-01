#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int t; cin >> t;
	while (t--){
        int row, col; cin >> row >> col;
        int metrix[row][col];
        for (int i = 0; i < row; ++i)
            for (int j = 0; j < col; ++j)
                cin >> metrix[i][j];

        int r, l, u, d;
        for (int i = 0; i < row; ++i){
            for (int j = 0; j < col; ++j){
                if (i == 0)
                    u = 0;
                else
                    u = metrix[i - 1][j];
                if (i == row - 1)
                    d = 0;
                else
                    d = metrix[i + 1][j];
                if (j == 0)
                    l = 0;
                else
                    l = metrix[i][j - 1];
                if (j == col - 1)
                    r = 0;
                else
                    r = metrix[i][j + 1];

                int mx = max (r, max (l, max (u, d)));
                if (metrix[i][j] >mx)
                    metrix[i][j] = mx;
            }
        }
        for (int i = 0; i < row; ++i){
            for (int j = 0; j < col; ++j){
                cout << metrix[i][j] << " ";
            }
            cout << "\n";
        }
	}

}
