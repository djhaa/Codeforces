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
    cin >> n;
    string s;
    cin >> s;
    int cnt = count(s.begin(), s.end(), 'M');
    if(cnt != n/3 || s[0] == 'M' || s[n-1] == 'M'){
        cout << "NO" << endl;
        return;
    }
    int left = 0, right = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'T') left++;
        else right++;
        if(left < right){
            cout << "NO" << endl;
            return;
        }
    }
    left = 0, right = 0;
    for(int i = n-1; i >= 0; i--){
        if(s[i] == 'T') left++;
        else right++;
        if(left < right){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}