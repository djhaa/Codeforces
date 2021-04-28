#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n;
    string b;
    cin >> n >> b;
    vector<char> res(n);
    res[0] = '1';
    for(int i = 1; i < n; i++){
        int now = b[i] - '0';
        int x = res[i-1] - '0' + b[i-1] - '0';
        if(x == 0) res[i] = '1';
        else if(x == 1){
            if(now == 0) res[i] = '0';
            else res[i] = '1';
        }else{
            if(now == 0) res[i] = '1';
            else res[i] = '0';
        }
    }
    for(char c:res)
        cout << c;
    cout << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}