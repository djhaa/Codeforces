#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cnt += (s[i] == '1');
    }
    if(cnt % 2 == 1 || s[0] == '0' || s.back() == '0'){
        cout << "NO" << endl;
        return;
    }
    vector<char> ans_a, ans_b;
    bool flag = false;
    int k = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            ans_a.push_back(2*k < cnt ? '(':')');
            ans_b.push_back(ans_a.back());
            k++;
        }else{
            ans_a.push_back(flag ? '(':')');
            ans_b.push_back(flag ? ')':'(');
            flag = !flag;
        }
    }
    cout << "YES" << endl;
    for(char c:ans_a) cout << c;
    cout << endl;
    for(char c:ans_b) cout << c;
    cout << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}