#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

void odd(int n){
    for(int i = 0; i < n; i++){
        bool flag = true;
        for(int j = i+1; j < n; j++){
            if(flag) cout << 1 << " ";
            else cout << -1 << " ";
            flag = !flag;
        }
    }
    cout << endl;
}

void even(int n){
    for(int i = 0; i < n; i++){
        int st;
        bool flag;
        if(i % 2 == 0){
            cout << 0 << " ";
            st = i + 2;
            flag = true;
        }else{
            st = i + 1;
            flag = false;
        }
        while(st < n){
            if(flag) cout << 1 << " ";
            else cout << -1 << " ";
            flag = !flag;
            st++;
        }
    }
    cout << endl;
}

void solveTestCase(){
    int n;
    cin >> n;
    if(n % 2) odd(n);
    else even(n);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}