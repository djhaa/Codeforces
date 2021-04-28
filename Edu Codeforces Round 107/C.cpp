#include <bits/stdc++.h>
using namespace std;
using LL = long long;
map<int, int> mp;

int main(){
    int n, q, x, t;
    scanf("%d %d", &n, &q);
    for(int i = 1; i <= n; i++){
        scanf("%d", &x);
        if(mp.find(x) == mp.end()) mp[x] = i;
    }
    while(q--){
        scanf("%d", &t);
        printf("%d ", mp[t]);
        for(auto u:mp){
            int k = u.first, v = u.second;
            if(k != t && v < mp[t]) mp[k] = v + 1;
        }
        mp[t] = 1;
    }
    printf("\n");
    return 0;
}