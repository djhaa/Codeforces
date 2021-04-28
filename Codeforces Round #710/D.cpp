#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solveTestCase(){
    map<LL, int> mp;
    priority_queue<int> q;
    int n;
    scanf("%d", &n);
    vector<LL> nums(n);
    for(int i = 0; i < n; i++){
        scanf("%lld", &nums[i]);
        mp[nums[i]]++;
    }
    for(auto x:mp){
        q.push(x.second);
    }
    while(q.size() > 1){
        int x = q.top();
        q.pop();
        int y = q.top();
        q.pop();
        x--, y--;
        if(x > 0) q.push(x);
        if(y > 0) q.push(y);
    }
    if(!q.size()) printf("%d\n", 0);
    else printf("%d\n", q.top());
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}