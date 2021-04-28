#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

bool check(string s){
    int left = 0, right = s.size()-1;
    while(left < right){
        if(s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

void solveTestCase(){
    string s;
    cin >> s;
    set<char> coll;
    for(char c:s) coll.insert(c);
    if(coll.size() == 1 && *coll.begin() == 'a') cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        if(check(s)) cout << s + 'a' << endl;
        else{
            int left = 0, right = s.size()-1;
            string ans;
            while(left < right){
                if(s[left] != s[right]) break;
                left++;
                right--;
            }
            if(s[left] != 'a'){
                ans = s.substr(0, s.size()-left-1) + 'a' + s.substr(s.size()-left-1, left+1);
            }else if(s[right] != 'a'){
                ans = s.substr(0, left+1) + 'a' + s.substr(left+1, s.size() - left-1);
            }
            cout << ans << endl;
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}