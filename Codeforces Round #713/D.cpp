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
    scanf("%d", &n);
    vector<int> b(n+2);
    for(int i = 0; i < n+2; i++) scanf("%d", &b[i]);
    sort(b.begin(), b.end());
    LL sum = 0;
    for(int i = 0; i < n; i++){
        sum += b[i];
        if(sum > 1e9){
            printf("-1\n");
            return;
        }
    }
    if(sum == b[n]){
        for(int i = 0; i < n; i++) cout << b[i] << " ";
        cout << endl;
        return;
    }
    int target = b[n+1], idx = -1;
    sum += b[n];
    for(int i = 0; i < n+1; i++){
        if(sum - b[i] == target){
            idx = i;
            break;
        }
    }
    if(idx == -1) cout << -1 << endl;
    else{
        for(int i = 0; i < n+1; i++){
            if(i == idx) continue;
            else{
                cout << b[i] << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}