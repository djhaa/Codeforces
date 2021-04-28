#include <bits/stdc++.h>
using namespace std;
using LL = long long;

int t, n, k;

int main(){
    cin >> t;
    while(t--){
        cin >> n >> k;
        int a = (n-1) / 2;
        if(a < k){
            cout << -1 << endl;
            continue;
        }
        vector<int> ans(n);
        for(int i = 1; i <= n; i++) ans[i-1] = i;
        int idx = 1;
        while(k--){
            int p = ans[idx];
            ans[idx] = ans[idx+1];
            ans[idx+1] = p;
            idx += 2;
        }
        for(int x:ans) cout << x << " ";
    }

    return 0;
}