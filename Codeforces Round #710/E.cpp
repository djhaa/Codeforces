#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solveTestCase(){
    int n;
    scanf("%d", &n);
    set<int> left, right;
    for(int i = 1; i <= n; i++){
        left.insert(i);
        right.insert(i);
    }
    vector<bool> vis(n+1, false);
    vector<int> q(n), max_ans(n, 0), min_ans(n, 0);
    for(int i = 0; i < n; i++){
        scanf("%d", &q[i]);
        if(!vis[q[i]]){
            max_ans[i] = q[i];
            min_ans[i] = q[i];
            vis[q[i]] = true;
            left.erase(q[i]);
            right.erase(q[i]);
        }
    }
    for(int i = 0; i < n; i++){
        if(min_ans[i] == 0){
            auto it = left.begin();
            min_ans[i] = *it;
            left.erase(it);
        }
    }
    for(int i = 0; i < n; i++){
        if(max_ans[i] == 0){
            int num = max_ans[i-1];
            auto it = --right.lower_bound(num);
            max_ans[i] = *it;
            right.erase(it);
        }
    }
    for(int x:min_ans) {
        printf("%d ", x);
    }
    printf("\n");
    for(int x:max_ans){
        printf("%d ", x);
    }
    printf("\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}