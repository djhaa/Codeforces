#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    int q, d, a;
    cin >> q >> d;
    while(q--){
        cin >> a;
        int len;
        for(int i = 1; i <= 9; i++){
            if(a / pow(10, i) == 0){
                len = i;
                break;
            }
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}