#include <bits/stdc++.h>
using namespace std;
#define Fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using LL = long long;
using PII = pair<int, int>;

int res[105][105];

void solveTestCase(){
    int n;
    cin >> n;
    if(n == 2){
        cout << -1 << endl;
        return;
    }
    int idx = 1;
    for(int i = 0, j = 0; i < n; i++, j++){
        res[i][j] = idx;
        idx++;
    }
    for(int i = 1; i < n; i++){    // 次数
        for(int row = i, col = 0; row < n; row++, col++){
            res[row][col] = idx;
            idx++;
        }
        for(int row = 0, col = i; col < n; row++, col++){
            res[row][col] = idx;
            idx++;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    Fast;
    int t;
    cin >> t;
    while(t--) solveTestCase();
    return 0;
}