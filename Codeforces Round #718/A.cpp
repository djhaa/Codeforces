#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    LL n;
    cin >> n;
    LL cnt = 0;
    for(int i = 14; i >= 0; i--){
        if(n == 0)break;
        else{
            LL x = 2050 * pow(10, i) * 1LL;
            cnt += n / x;
            n %= x;
        }
    }
    if(n == 0) cout << cnt << endl;
    else cout << -1 << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}