#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    int n;
    cin >> n;
    if(n == 1) cout << 9;
    else{
        cout << 98;
        n -= 2;
        int idx = 9;
        for(int i = 0; i < n; i++){
            cout << idx;
            if(idx == 9) idx = 0;
            else idx++;
        }
    }
    cout << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}