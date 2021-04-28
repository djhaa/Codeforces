#include <bits/stdc++.h>
using namespace std;
using LL = long long;

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    string s;
    for(int i = 0; i < k; i++){
        s += i + 'a';
        for(int j = i+1; j < k; j++){
            s += i + 'a';
            s += j + 'a';
        }
    }
    for(int i = 0; i < n; i++) cout << s[i % s.size()];
    return 0;
}