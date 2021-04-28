#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

bool isPalindrome(string s){
    int left = 0, right = s.size()-1;
    while(left < right){
        if(s[left] != '?' && s[right] != '?' && s[left] != s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

void solveTestCase(){
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    if(!isPalindrome(s)){
        printf("-1\n");
        return;
    }
    
    int left = 0, right = s.size()-1;
    while(left < right){
        if(s[left] != '?' && s[right] == '?'){
            s[right] = s[left];
            if(s[left] == '0') a -= 2;
            else b -= 2;
        }
        else if(s[left] == '?' && s[right] != '?'){
            s[left] = s[right];
            if(s[left] == '0') a -= 2;
            else b -= 2;
        }else if(s[left] != '?' && s[right] != '?'){
            if(s[left] == '0') a -= 2;
            else b -= 2;
        }
        left++;
        right--;
    }
    left = 0, right = s.size()-1;
    while(left < right){
        if(s[left] == '?'){
            if(a > 1){
                s[left] = s[right] = '0';
                a -= 2;
            }else{
                s[left] = s[right] = '1';
                b -= 2;
            }
        }
        left++;
        right--;
    }
    if(s.size() % 2){
        if(s[s.size()/2] == '?'){
            if(a > 0){
                s[s.size()/2] = '0';
                a --;
            }
            else{
                s[s.size()/2] = '1';
                b--;
            }
        }else{
            if(s[s.size()/2] == '1') b--;
            else a--;
        }
    }
    if(a == 0 && b == 0) cout << s << endl;
    else cout << "-1" << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}