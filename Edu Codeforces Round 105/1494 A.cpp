#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solveTestCase(){
    string s;
    cin >> s;
    int n = s.size(), cnt_left = 0, cnt_right = 0;
    vector<int> res(3);
    int x = s[0] - 'A', y = s.back() - 'A';
    if(x == y) {
        printf("NO\n");
        return;
    }
    res[x] = 1, res[y] = -1;
    for(int i = 0; i < n; i++){
        if(x + 'A' == s[i]) cnt_left++;
        else if(y + 'A' == s[i]) cnt_right++;
    }
    if(!(cnt_left == n / 2 or cnt_right == n / 2)){
        printf("NO\n");
        return;
    }
    if(cnt_left == n / 2) res[3^x^y] = -1;
    else res[3^x^y] = 1;
    int left = 0, right = 0;
    for(int i = 0; i < n; i++){
        if(res[s[i] - 'A'] == 1) left++;
        else right++;
        if(left < right){
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}