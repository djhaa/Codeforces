#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    int n, k;
    cin >> n >> k;
    if(n&1){
        cout << 1 << " " << n/2 << " " << n/2 << endl;
    }else{
        if((n/2)&1){
            cout << 2 << " " << (n-2)/2 << " " << (n-2)/2 << endl;
        }else{
            cout << n/2 << " " << n/2/2 << " " << n/2/2 << endl;
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}