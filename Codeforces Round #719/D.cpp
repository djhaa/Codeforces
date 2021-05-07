#include <bits/stdc++.h>
using namespace std;
#define Fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n;
    cin >> n;
    vector<int> nums(n);
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        mp[nums[i] - i]++;
    }
    LL res = 0;
    for(auto u:mp){
        if(u.second > 1){
            res += 1LL * u.second * (u.second - 1) / 2;
        }
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