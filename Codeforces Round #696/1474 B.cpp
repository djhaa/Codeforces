#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

bool check(int x){
    if(x == 1) return true;
    for(int i = 2; i*i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

void solveTestCase(){
    int d;
    cin >> d;
    int x = 1 + d, y;
    while(!check(x)){
        x++;
    }
    y = x + d;
    while(!check(y)){
        y++;
    }
    cout << x * y << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}