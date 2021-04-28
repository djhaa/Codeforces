#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n;
    cin >> n;
    vector<int> nums(n);
    int mininum = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        mininum = min(mininum, nums[i]);
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] > mininum) ans++;
    }
    cout << ans << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}