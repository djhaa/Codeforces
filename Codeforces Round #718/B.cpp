#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;
struct node{
    int x, row, col;
};

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

bool cmp(node& u, node& v){
    return u.x < v.x;
}

void solveTestCase(){
    int n, m;
    cin >> n >> m;
    vector<node> nums;
    map<int, vector<node>> mp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            nums.push_back((node){x, i, j});
            mp[i].push_back((node){x, i, j});
        }
    }
    sort(nums.begin(), nums.end(), cmp);
    vector<vector<int>> ans(n, vector<int>(m, 0));
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    int col = 0;
    for(int i = 0; i < m; i++){
        int x = nums[i].x, row = nums[i].row;
        ans[row][col] = x;
        vis[row][nums[i].col] = true;
        col++;
    }
    for(int i = 0; i < n; i++){
        int idx = 0;
        for(node u:mp[i]){
            int x = u.x, row = u.row, col = u.col;
            if(vis[row][col]) continue;
            else{
                while(idx < m && ans[i][idx] != 0) idx++;
                ans[i][idx] = x;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int x:ans[i]){
            cout << x << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}