#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    while(k > 1){
        bool flag = true;
        for(int i = 1; i < n; i++){
            if(nums[i] > nums[i-1]){
                nums[i-1]++;
                k--;
                flag = false;
                break;
            }
        }
        if(flag) break;
    }
    bool flag = true;
    for(int i = 1; i < n; i++){
        if(nums[i] > nums[i-1]){
            cout << i << endl;
            flag = false;
            break;
        }
    }
    if(flag) cout << -1 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}