#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solveTestCase(){
    string a, b;
    cin >> a >> b;
    int ans = 0;
    int n = a.size(), m = b.size();
    for(int len = 1; len <= min(n, m); len++){
        for(int l = 0; l + len - 1 < n; l++){
            for(int r = 0; r + len - 1 < m; r++){
                if(a.substr(l, len) == b.substr(r, len))
                    ans = max(ans, len);
            }
        }
    }
    printf("%d\n", n + m - 2*ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}