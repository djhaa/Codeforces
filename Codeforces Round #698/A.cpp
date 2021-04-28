#include <bits/stdc++.h>
using namespace std;

const int N = 105;

int t, n, a[N], ans;

int main(){
    scanf("%d\n", &t);
    while(t--){
        ans = 0;
        map<int, int> mp;
        scanf("%d\n", &n);
        for(int i = 1; i <= n; i++){
            scanf("%d", &a[i]);
        }
        for(int i = 1; i <= n; i++){
            mp[a[i]] += 1;
            ans = max(ans, mp[a[i]]);
        }
        printf("%d\n", ans);
    }
}