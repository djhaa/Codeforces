#include <bits/stdc++.h>
using namespace std;
using LL = long long;

const int N = 2e5+5, MOD = 1e9+7;
int dp[N];

void solveTestCase(){
    int n, m, ans = 0;
    scanf("%d %d", &n, &m);
    while(n > 0){
        int x = n % 10;
        ans += ((m+x < 10) ? 1 : dp[m+x-10]);
        ans %= MOD;
        n /= 10;
    }
    printf("%d\n", ans);
}

int main(){
    for(int i = 0; i < 9; i++) dp[i] = 2;
    dp[9] = 3;
    for(int i = 10; i < N; i++){
        dp[i] = (dp[i-9] + dp[i-10]) % MOD;
    }
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}