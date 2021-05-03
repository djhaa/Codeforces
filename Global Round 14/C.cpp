#include <bits/stdc++.h>
using namespace std;
#define Fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using LL = long long;
using PII = pair<int, int>;

struct node{
    int val, id;
};

bool cmp(node u, node v){
    return u.val > v.val;
}

void solveTestCase(){
    int n, m, x;
    cin >> n >> m >> x;
    vector<node> nums;
    int y;
    for(int i = 0; i < n; i++){
        cin >> y;
        nums.push_back({y, i});
    }
    sort(nums.begin(), nums.end(), cmp);
    priority_queue<PII, vector<PII>, greater<PII>> heap;
    vector<int> res(n);
    for(int i = 1; i <= m; i++){
        heap.push({0, i});
    }
    int maxinum = 0;
    for(int i = 0; i < n; i++){
        int val = nums[i].val, id = nums[i].id;
        PII u = heap.top();
        heap.pop();
        int cnt = u.first, idx = u.second;
        res[id] = idx;
        heap.push({cnt + val, idx});
        maxinum = max(maxinum, cnt + val);
    }
    if(maxinum - heap.top().first > x){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for(int p:res){
        cout << p << " ";
    }
    cout << endl;
}

int main(){
    Fast;
    int t;
    cin >> t;
    while(t--) solveTestCase();
    return 0;
}