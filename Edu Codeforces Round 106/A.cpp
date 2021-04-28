#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n, k1, k2;
    cin >> n >> k1 >> k2;
    int w, b;
    cin >> w >> b;
    if(k1 + k2 >= 2*w && 2*n - k1 - k2 >= 2*b){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}