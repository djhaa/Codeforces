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
    cout << n - k + k / 2 << '\n';
    for (int i = k + 1; i <= n; ++i) cout << i << " ";
    for (int i = (k + 1) / 2; i < k; ++i) cout << i << " ";
    cout << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}