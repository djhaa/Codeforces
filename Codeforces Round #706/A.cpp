#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(k == 0){
        cout << "YES" << endl;
        return;
    }
    int left = 0, right = s.size()-1;
    while(left < right){
        if(s[left] == s[right]){
            left++;
            right--;
        }else{
            break;
        }
    }
    if(right < left){
        if(right >= k){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        return;
    }
    if(left == right && left >= k){
        cout << "YES" << endl;
    }else if(left >= k){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}