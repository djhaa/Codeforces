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
    scanf("%d", &n);
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &nums[i]);
    }
    int value;
    if(nums[0] == nums[1] || nums[0] == nums[2])
        value = nums[0];
    else
        value = nums[1];
    for(int i = 0; i < n; i++){
        if(nums[i] != value){
            printf("%d\n", i+1);
            break;
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}