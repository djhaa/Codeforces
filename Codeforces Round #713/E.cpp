#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    int n, l, r, s;
    scanf("%d %d %d %d", &n, &l, &r, &s);
    int k = r - l + 1, sum = 0;
    vector<int> ans(k);
    for(int i = 1; i <= k; i++){
        ans[i-1] = i;
        sum += i;
    }
    if(sum > s){
        cout << -1 << endl;
        return;
    }
    set<int> collection;
    for(int i = k+1; i <= n; i++) collection.insert(i);
    int idx = k-1;
    while(sum < s && collection.size() && idx >= 0){
        set<int>::const_reverse_iterator it = collection.rbegin();
        if(sum - ans[idx] + *it < s){
            sum = sum - ans[idx] + *it;
            collection.insert(ans[idx]);
            ans[idx] = *it;
            collection.erase(*it);
            idx--;
        }else{
            while(*collection.rbegin() + sum - ans[idx] > s){
                collection.erase(*collection.rbegin());
            }
            int num = *collection.rbegin();
            sum = sum - ans[idx] + num;
            collection.insert(ans[idx]);
            ans[idx] = num;
            collection.erase(num);
            idx--;
        }
    }
    idx = 0;
    if(sum == s){
        set<int> q;
        for(int i = 1; i <= n; i++){
            q.insert(i);
        }
        for(int x:ans) q.erase(x);
        for(int i = 1; i <= n; i++){
            if(l <= i && i <= r){
                cout << ans[idx] << " ";
                idx++;
            }else{
                cout << *q.begin() << " ";
                q.erase(q.begin());
            }
        }
        cout << endl;
    }else{
        cout << -1 << endl;
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}