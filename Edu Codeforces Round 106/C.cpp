#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n;
    cin >> n;
    vector<int> cost(n);
    for(int i = 0; i < n; i++){
        scanf("%d", &cost[i]);
    }
    LL ans = (LL)cost[0] * n + (LL)cost[1] * n;
    LL left = cost[0], right = cost[1], sumleft = cost[0], sumright = cost[1];
    int cntleft = 1, cntright = 1;
    for(int i = 2; i < n; i++){
        if(i % 2){
            right = min(right, (LL)cost[i]);
            sumright += cost[i];
            cntright++;
        }else{
            left = min(left, (LL)cost[i]);
            sumleft += cost[i];
            cntleft++;
        }
        LL k = left * (LL)(n - cntleft + 1) + right * (LL)(n - cntright + 1);
        if(cntleft > 1) k += (sumleft - left);
        if(cntright > 1) k += (sumright - right);
        ans = min(ans, k);
    }
    cout << ans << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}