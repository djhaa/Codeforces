#include <bits/stdc++.h>
using namespace std;
#define Fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n, u, v;
    cin >> n >> u >> v;
    set<int> coll;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    // three type: a) move 0 times   b) move 1 times  c) move 2 times
    bool flag = false;
    for(int i = 0; i < n; i++){
        coll.insert(nums[i]);
        if(i > 0 && abs(nums[i] - nums[i-1]) > 1){
            flag = true;
        }
    }
    if(flag) cout << 0 << endl;
    else if(coll.size() == 1) cout << v + min(u, v) << endl;
    else cout << min(u, v) << endl;
}

int main(){
    Fast;
    int t;
    cin >> t;
    while(t--) solveTestCase();
    return 0;
}