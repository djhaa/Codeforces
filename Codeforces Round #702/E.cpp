#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

struct node{
    int id, val;
};

bool cmp(node u, node v){
    if(u.val == v.val) return u.id < v.id;
    return u.val < v.val;
}

void solveTestCase(){
    int n;
    cin >> n;
    vector<node> nums(n);
    int x;
    for(int i = 1; i <= n; i++){
        cin >> x;
        nums[i-1] = {i, x};
    }
    sort(nums.begin(), nums.end(), cmp);
    int idx = 0;
    LL cnt = nums[0].val;
    for(int i = 1; i < n; i++){
        if(cnt < nums[i].val){
            idx = i;
        }
        cnt += nums[i].val;
    }
    vector<int> res;
    for(int i = idx; i < n; i++){
        res.push_back(nums[i].id);
    }
    sort(res.begin(), res.end());
    cout << res.size() << endl;
    for(int k:res) cout << k << " ";
    cout << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}