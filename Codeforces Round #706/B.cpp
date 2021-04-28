#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    int a = 0, b = -1;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        a = max(a, nums[i]);
    }
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++){
        if(i != nums[i]){
            b = i;
            break;
        }
    }
    if(b == -1) b = a + 1;
    if(k == 0){
        cout << n << endl;
        return;
    }
    if(a < b){
        cout << n + k << endl;
        return;
    }else{
        int num = (a+b)/2 + ((a+b)%2 != 0);
        int ans = n+1;
        for(int i = 0; i < n; i++){
            if(nums[i] == num){
                ans--;
                break;
            }
        }
        cout << ans << endl;
    }

}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}