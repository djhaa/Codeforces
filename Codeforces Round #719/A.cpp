#include <bits/stdc++.h>
using namespace std;
#define Fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> nums;
    for(int i = 0; i < n; i++){
        if(nums.empty()) nums.push_back(s[i]);
        else{
            if(s[i] != nums.back()) nums.push_back(s[i]);
        }
    }
    unordered_map<char, bool> mp;
    for(int i = 0; i < nums.size(); i++){
        if(mp.find(nums[i]) == mp.end()) mp[nums[i]] = true;
        else{
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){
    Fast;
    int t;
    cin >> t;
    while(t--) solveTestCase();
    return 0;
}