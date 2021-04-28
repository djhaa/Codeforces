#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    int ans = 0;
    for(int i = 1; i < n; i++){
        int maxinum = max(nums[i], nums[i-1]);
        int mininum = min(nums[i], nums[i-1]);
        while(maxinum > 2*mininum){
            ans++;
            mininum *= 2;
        }    
    }
    cout << ans << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}