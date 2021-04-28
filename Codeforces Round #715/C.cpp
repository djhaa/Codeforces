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
    vector<LL> nums(n);
    vector<vector<LL>> dp(n, vector<LL>(n, 0));
    for(int i = 0; i < n; i++) cin >> nums[i];
    sort(nums.begin(), nums.end());
    for(int len = 2; len <= n; len++){
        for(int left = 0; left + len  <= n; left++){
            int right = left + len - 1;
            dp[left][right] = min(dp[left+1][right], dp[left][right-1]) + nums[right] - nums[left];
        }
    }
    cout << dp[0][n-1] << endl;
}

int main(){
    solveTestCase();
    return 0;
}