#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    int r, b, d;
    cin >> r >> b >> d;
    if(d == 0){
        if(r == b) cout << "YES" << endl;
        else cout << "NO" << endl;
        return;
    }
    int diff = abs(r - b);
    int cnt = diff / d + (diff % d ? 1 : 0);
    if(cnt > r || cnt > b) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}