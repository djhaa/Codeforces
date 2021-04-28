#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    int a, b;
    cin >> a >> b;
    int ans = INT_MAX;
    int k = 0;
    if(b == 1) k++;
    for(int i = k; i < 50; i++){
        int m = b + i, cnt = i, num = a;
        while(num){
            cnt++;
            num /= m;
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}