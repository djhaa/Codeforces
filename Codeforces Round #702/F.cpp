#include <bits/stdc++.h>
using namespace std;
#define Fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n, m;
    cin >> n;
    vector<int> nums(n), data(n+1, 0);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int l = 0;
    while(l < n){
        int num = nums[l], r = l;
        while(r < n && nums[r] == nums[l]){
            r++;
        }
        data[r - l]++;
        l = r;
    }
    vector<int> leftSum(n+1, 0), rightSum(n+1, 0);
    for(int i = 2; i <= n; i++){
        leftSum[i] = leftSum[i-1] + (i-1) * data[i-1];
    }
    int cnt = 0;
    for(int j = n-1; j > 0; j--){
        rightSum[j] = rightSum[j+1] + data[j+1];
        data[j] += data[j+1];
    }
    int res = INT_MAX;
    for(int k = 1; k <= n; k++){
        res = min(res, leftSum[k] + rightSum[k]);
    }
    cout << res << endl;
}

int main(){
    Fast;
    int t;
    cin >> t;
    while(t--) solveTestCase();
    return 0;
}