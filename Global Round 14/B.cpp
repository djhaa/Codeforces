#include <bits/stdc++.h>
using namespace std;
#define Fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using LL = long long;
using PII = pair<int, int>;

bool check(int x){
    int y = sqrt(x);
    if(y*y == x) return true;
    else return false;
}

void solveTestCase(){
    int n;
    cin >> n;
    bool flag = false;
    if(n % 2 == 0){
        if(check(n/2)) flag = true;
    }
    if(n % 4 == 0){
        if(check(n/4)) flag = true;
    }
    if(!flag) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main(){
    Fast;
    int t;
    cin >> t;
    while(t--) solveTestCase();
    return 0;
}