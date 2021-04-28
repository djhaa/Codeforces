#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n;
    scanf("%d", &n);
    vector<int> nums(n);
    for(int i = 0; i < n; i++) scanf("%d", &nums[i]);
    stack<int> st;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int k = nums[i];
        if(k == 0){
            st.push(i);
            mp[i] = 0;
        }
        else{
            mp[i] = 1;
            while(!st.empty() && st.top() > i - k){
                mp[st.top()] = 1;
                st.pop();
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << mp[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}