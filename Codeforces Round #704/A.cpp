#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    LL p, a, b, c;
    cin >> p >> a >> b >> c;
    cout << min((a - p%a)%a, min((b - p%b)%b, (c - p%c)%c)) << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}