#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solveTestCase(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    string x = "1", y = "1";
    int cnt1 = a - c, cnt2 = b - c, cnt3 = c - 1;
    while(cnt1--) x += '0';
    while(cnt2--) y += '1';
    while(cnt3--){
        x += '0';
        y += '0';
    }
    cout << x << " " << y << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}