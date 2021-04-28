#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    int n, q, k;
    cin >> n >> q >> k;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    int l, r;
    while(q--){
        cin >> l >> r;
        int left = nums[l-1], right = nums[r-1];
        int ans = k - left - (r - l) + right - 1 - (r - l);
        cout << ans << endl;
    }

}

int main(){
    solveTestCase();
    return 0;
}