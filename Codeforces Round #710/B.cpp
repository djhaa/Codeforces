#include <bits/stdc++.h>
using namespace std;
using LL = long long;

int t, n, k;
string s;

int main(){
    cin >> t;
    while(t--){
        cin >> n >> k;
        cin >> s;
        int ans = 1;
        int left = 0, right = n-1;
        while(s[left] != '*') left++;
        while(s[right] != '*') right--;
        while(left < right){
            if(s[right - k] == '*'){
                ans++;
                right -= k;
            }else{
                int idx = right - k;
                while(s[idx] != '*') idx++;
                ans++;
                right = idx;
            }
        }
        cout << ans << endl;
    }

    return 0;
}