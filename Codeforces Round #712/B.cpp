#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

struct Node{
    int cnt_0 = 0, cnt_1 = 0;
};

bool check(string x, string y){
    for(int i = 0; i < x.size(); i++){
        if(((x[i] - '0') ^ 1) != (y[i] - '0')){
            return false;
        }
    }
    return true;
}

void solveTestCase(){
    int n;
    string a, b;
    cin >> n >> a >> b;
    vector<Node> nums(n);
    vector<int> vis;
    if(a == b) {
        cout << "YES" << endl;
        return;
    }
    int cnt_0 = 0, cnt_1 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == '0') cnt_0++;
        else cnt_1++;
        nums[i].cnt_0 = cnt_0;
        nums[i].cnt_1 = cnt_1;
    }
    for(int i = 0; i < n; i++){
        if(nums[i].cnt_0 == nums[i].cnt_1){
            vis.push_back(i);
        }
    }
    if(!vis.size()){
        cout << "NO" << endl;
        return;
    }
    string s1, s2;
    for(int i = 0; i < vis.size(); i++){
        if(i == 0){
            s1 = a.substr(0, vis[i]+1), s2 = b.substr(0, vis[i]+1);
        }else{
            s1 = a.substr(vis[i-1]+1, vis[i]-vis[i-1]), s2 = b.substr(vis[i-1]+1, vis[i]-vis[i-1]);
        }
        if(s1 == s2) continue;
        if(!check(s1, s2)){
            cout << "NO" << endl;
            return;
        }
    }
    int idx = *vis.rbegin();
    if(a.substr(idx+1, n-idx-1) == b.substr(idx+1, n-idx-1)){
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