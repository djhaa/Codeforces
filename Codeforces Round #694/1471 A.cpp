#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    int n, x;
    LL m;
    cin >> n >> x;
    LL first = 0, ans = 0;
    for(int i = 0; i < n; i++){
        cin >> m;
        first += m;
        ans = ans + m / x + (m % x ? 1 : 0);
    }
    cout << first / x + (first % x ? 1 : 0) << " " << ans << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}