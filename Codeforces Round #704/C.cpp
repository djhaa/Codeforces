#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    int n, m;
    cin >> n >> m;
    string s, t;
    vector<int> first(n), second(n);
    cin >> s >> t;
    int left = 0, right = 0;
    while(left < n){
        while(left < n && s[left] != t[right]){
            left++;
        }
        first[right] = left;
        left++;
        right++;
        if(right == m) break;
    }
    left = n-1, right = m-1;
    while(left >= 0){
        while(left >= 0 && s[left] != t[right]){
            left--;
        }
        second[right] = left;
        left--;
        right--;
        if(right == 0) break;
    }
    int maxinum = 0;
    for(int i = 1; i < m; i++){
        maxinum = max(maxinum, second[i] - first[i-1]);
    }
    cout << maxinum << endl;
}

int main(){
    solveTestCase();
    return 0;
}