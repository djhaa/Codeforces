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
    vector<int> ans1, ans2;
    for(int i = 0; i < n; i++) cin >> nums[i];
    for(int i = 0; i < n; i++){
        if(nums[i] % 2 == 0) ans1.push_back(nums[i]);
        else ans2.push_back(nums[i]);
    }
    for(int x:ans1) cout << x << " ";
    for(int x:ans2) cout << x << " ";
    cout << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}