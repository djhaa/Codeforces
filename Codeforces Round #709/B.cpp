#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    } 
    bool flag = true;
    for(int i = 1; i < n-1; i++){
        if(nums[i] - nums[i-1] != nums[i+1] - nums[i]){
            flag = false;
        }
    }
    if(flag || n == 1){
        cout << 0 << endl;
        return;
    }
    for(int i = 1; i < n; i++){
        if(nums[i] == nums[i-1]){
            cout << -1 << endl;
            return;
        }
    }
    int left = -1, right = 1, maxinum = nums[0];
    for(int i = 1; i < n; i++){
        maxinum = max(maxinum, nums[i]);
        if(nums[i] > nums[i-1]){
            if(left == -1) left = nums[i] - nums[i-1];
            else{
                if(left != nums[i] - nums[i-1]){
                    cout << -1 << endl;
                    return;
                }
            }
        }else{
            if(right == 1) right = nums[i] - nums[i-1];
            else{
                if(right != nums[i] - nums[i-1]){
                    cout << -1 << endl;
                    return;
                }
            }
        }
    }
    if(left - right < maxinum){
        cout << -1 << endl;
    }else{
        cout << left - right << " " << left << endl;
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}