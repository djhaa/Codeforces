#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

void get(vector<int> nums, int left, int right, vector<int>& ans, int cnt){
    if(left > right)
        return;
    if(left == right){
        ans[left] = cnt;
        return;
    }
    int maxinum = nums[left], idx = left;
    for(int i = left; i <= right; i++){
        if(nums[i] > maxinum){
            maxinum = nums[i];
            idx = i;
        }
    }
    ans[idx] = cnt;
    get(nums, left, idx-1, ans, cnt+1);
    get(nums, idx+1, right, ans, cnt+1);
}

void solveTestCase(){
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> ans(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    get(nums, 0, n-1, ans, 0);
    for(int x:ans)
        cout << x << " ";
    cout << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}