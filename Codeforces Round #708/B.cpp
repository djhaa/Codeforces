#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++) cin >> nums[i];
    for(int i = 0; i < n; i++){
        mp[nums[i]%m]++;
    }
    int ans = 0, cnt = 0;
    for(auto u:mp){
        int k = u.first, v = u.second;
        if(k == 0){
            ans++;
            cnt += v;
        }else if(v > 0 && mp.find(m-k) != mp.end()){
            if(k == m-k){
                ans++;
                cnt += mp[k];
                mp[k] = 0;
            }else{
                int mininum = min(v, mp[m-k]);
                cnt += 2*mininum;
                mp[k] -= mininum;
                mp[m-k] -= mininum;
                if(mp[k] > 0){
                    mp[k]--;
                    cnt++;
                }
                if(mp[m-k] > 0){
                    mp[m-k]--;
                    cnt++;
                }
                ans++;
            }
        }
    }
    cout << ans + n - cnt << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}