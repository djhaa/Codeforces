#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n, k;
    cin >> n >> k;
    if(n % 2 == 0){
        int x = k % n;
        int ans = x ? x:n;
        cout << ans << endl;
    }else{
        int x = (k-1) / (n/2);
        if(k <= n/2){
            int y = k % n;
            int ans = y?y:n;
            cout << ans << endl;
        }else{
            int z = (k + x)%n;
            int ans = z?z:n;
            cout << ans << endl;
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}