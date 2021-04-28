#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solveTestCase(){
    int n;
    scanf("%d", &n);
    int ans = 0;
    while(n--){
        int a;
        scanf("%d", &a);
        if(a == 1 || a == 3) ans++;
    }
    printf("%d\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}