#include <bits/stdc++.h>
using namespace std;
#define Fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n;
    cin >> n;
    int res = 0;
    for(int i = 1; i <= 9; i++){
        LL cnt = 0;
        while(cnt * 10 + i <= n){
            cnt = cnt * 10 + i;
            res++;
        }
    }
    cout << res << endl;
}

int main(){
    Fast;
    int t;
    cin >> t;
    while(t--) solveTestCase();
    return 0;
}