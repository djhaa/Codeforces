#include <bits/stdc++.h>
using namespace std;
#define Fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n;
    cin >> n;
    vector<int> nums(n), cnt(n, 0);
    for(int i = 0; i < n; i++) cin >> nums[i];
    LL ans = 0;
    for(int i = 0; i < n; i++){
        ans += max(nums[i] - cnt[i] - 1, 0);
        for(int j = i + 1; j < n; j++){
            if(j == i+1){
                if(cnt[i] > nums[i]-1) cnt[j] += cnt[i] - nums[i] + 1;
            }else if(nums[i] >= j - i) cnt[j]++;
        }
    }
    cout << ans << endl;
}

int main(){
    Fast;
    int t;
    cin >> t;
    while(t--) solveTestCase();
    return 0;
}