#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solveTestCase(){
    int n, U, R, D, L;
    scanf("%d %d %d %d %d", &n, &U, &R, &D, &L);
    bool flag = false;
    for(int i = 0; i < 16; i++){
        int u = U, r = R, d = D, l = L;
        if(i & 1){
            u--;
            l--;
        }
        if(i & 2){
            u--;
            r--;
        }
        if(i & 4){
            r--;
            d--;
        }
        if(i & 8){
            d--;
            l--;
        }
        if(min(min(u,r), min(d, l)) >= 0 && max(max(u, r), max(d, l)) <= n-2){
            flag = true;
            break;
        }
    }
    if(flag) printf("YES\n");
    else printf("NO\n");

}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}