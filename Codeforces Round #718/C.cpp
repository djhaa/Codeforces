#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    int n;
    cin >> n;
    vector<vector<int>> ans(n, vector<int>(n, 0));
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        ans[i][i] = nums[i];
    }
    for(int i = 0; i < n; i++){
        int cnt = nums[i], row = i, col = i;
        while(cnt > 1){
            if(col > 0 && ans[row][col-1] == 0){
                col--;
                ans[row][col] = nums[i];
            }else{
                row++;
                ans[row][col] = nums[i];
            }
            cnt--;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    solveTestCase();
    return 0;
}