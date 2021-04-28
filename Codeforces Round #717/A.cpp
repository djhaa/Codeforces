#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    int cnt = 0;
    for(int i = 0; i < n-1; i++){
        cnt += nums[i];
        if(cnt <= k){
            nums[n-1] += nums[i];
            nums[i] = 0;
        }else{
            int x = nums[i];
            nums[i] = cnt - k;
            nums[n-1] += (x - nums[i]);
            break;
        }
    }
    for(int x:nums) cout << x << " ";
    cout << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}