#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    LL n, k;
    cin >> n >> k;
    LL m = (n + k - 1) / k;
    k *= m;
    cout << (k+n-1)/n << endl;

}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}