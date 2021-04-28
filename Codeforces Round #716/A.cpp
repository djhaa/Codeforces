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
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    for(int i = 0; i < n; i++){
        int y = sqrt(nums[i]);
        if(y*y != nums[i]){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}