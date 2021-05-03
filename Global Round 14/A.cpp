#include <bits/stdc++.h>
using namespace std;
#define Fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n, x;
    cin >> n >> x;
    vector<int> nums(n), res;
    vector<bool> vis(n, false);
    for(int i = 0; i < n; i++) cin >> nums[i];
    int cnt = 0;
    for(int k = 0; k < nums.size(); k++){
        int len = n, cnt = 0;
        while(len--){
            for(int i = k; i < nums.size(); i++){
                if(!vis[i] && nums[i] + cnt != x){
                    cnt += nums[i];
                    res.push_back(nums[i]);
                    vis[i] = true;
                    break;
                }
            }
        }
        if(res.size() == n) break;
        else res.clear();
    }
    if(res.size() == n){
        cout << "YES" << endl;
        for(int y:res) cout << y << " ";
        cout << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    Fast;
    int t;
    cin >> t;
    while(t--) solveTestCase();
    return 0;
}