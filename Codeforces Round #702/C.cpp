#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

bool check(LL b){
    LL left = 1, right = b / 2;
    while(left < right){
        LL mid = left + (right - left) / 2;
        if(pow(mid, 3) < b) left = mid + 1;
        else if(pow(mid, 3) == b) return true;
        else right = mid - 1;
    }
    return pow(left, 3) == b;
}

void solveTestCase(){
    LL x;
    cin >> x;
    for(int i = 1; pow(i, 3) <= x; i++){
        LL b = x - pow(i, 3);
        if(check(b)){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}