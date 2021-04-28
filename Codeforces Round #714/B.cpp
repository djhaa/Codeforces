#include <bits/stdc++.h>
using namespace std;
using LL = long long;
LL MOD = 1e9 + 7;
int t, n, k;


int main(){
    cin >> t;
    while(t--){
        cin >> n;
        LL cnt = 1;
        vector<int> nums(n);
        for(int i = 1; i <= n-2; i++) cnt = (cnt * i) % MOD;
        for(int i = 0; i < n; i++) cin >> nums[i];
        int num = *min_element(nums.begin(), nums.end()), count = 0;
        bool flag = false;
        for(int i = 0; i < n; i++){
            if(nums[i] == num) count++;
            if((num & nums[i]) != num){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << 0 << endl;
            continue;
        }
        LL ans = 1LL*count * (count - 1) % MOD;
        ans = ans * cnt % MOD;
        cout << ans << endl;
    }

    return 0;
}