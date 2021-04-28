#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

bool check(string a, string b){
    bool flag1 = true, flag2 = true;
    for(int i = 1; i < a.size(); i++){
        if(a[i] == '1' && a[i-1] == '1') flag1 = false;
    }
    for(int i = 1; i < b.size(); i++){
        if(b[i] == '0' && b[i-1] == '0') flag2 = false;
    }
    return flag1 && flag2;
}

void solveTestCase(){
    string s;
    cin >> s;
    set<char> coll;
    for(int i = 0; i < s.size(); i++){
        coll.insert(s[i]);
    }    
    if(coll.size() == 1){
        cout << "YES" << endl;
        return;
    }
    for(int i = 1; i < s.size(); i++){
        string a = s.substr(0, i), b = s.substr(i, s.size()-i);
        if(check(a, b)){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}