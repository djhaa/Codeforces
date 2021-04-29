#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

bool cmp(int x, int y){
    return x > y;
}

void solveTestCase(){
    int n, m;
    cin >> n >> m;
    vector<int> friends(n), prices(m);
    priority_queue<int, vector<int>, greater<int>> heap;
    for(int i = 0; i < n; i++) cin >> friends[i];
    for(int i = 0; i < m; i++){
        cin >> prices[i];
        heap.push(prices[i]);
    }
    sort(friends.begin(), friends.end(), cmp);
    LL ans = 0;
    for(int i = 0; i < n; i++){
        int x = heap.top();
        if((LL)x <= prices[friends[i]-1]){
            ans += x;
            heap.pop();
        }else{
            ans += prices[friends[i]-1];
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