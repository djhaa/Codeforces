#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

LL gcdSum(LL x){
    LL tmp = x, digst = 0;
    while(tmp){
        digst += tmp % 10;
        tmp /= 10;
    }
    return __gcd(x, digst);
}

void solveTestCase(){
    LL n;
    cin >> n;
    if(gcdSum(n) != 1) cout << n << endl;
    else if(gcdSum(n+1) != 1) cout << n+1 << endl;
    else cout << n+2 << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}