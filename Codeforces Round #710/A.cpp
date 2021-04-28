#include <bits/stdc++.h>
using namespace std;
using LL = long long;

LL row, col, x;

void solveTestCase(){
    scanf("%lld %lld %lld", &row, &col, &x);
    LL c = x/row, r = x % row;
    if(r == 0){
        r = row;
    }else{
        c ++;
    }
    printf("%lld\n", (r-1)*col + c);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}