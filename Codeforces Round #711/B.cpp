#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n, W;
    cin >> n >> W;
    vector<int> nums;
    multiset<int> coll;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(), nums.end());
    int ans = 0;
    for(auto i = nums.rbegin(); i != nums.rend(); i++){
        int num = *i;
        auto it = coll.lower_bound(num);
        if(it != coll.end()){
            int val = *it;
            coll.erase(it);
            val -= num;
            if(val){
                coll.insert(val);
            }
        }else{
            ans++;
            coll.insert(W - num);
        }
    }
    cout << ans << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}