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
    int first = 0, second = 0, third = 0;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        first = first + (nums[i]%3 == 0);
        second = second + (nums[i] % 3 == 1);
        third = third + (nums[i] % 3 == 2);
    }
    int cnt = n / 3, ans = 0;
    if(first <= cnt && second > cnt){
        ans += (second - cnt);
        third += (second - cnt);
        ans += (third - cnt);

    }else if(second <= cnt && third > cnt){
        ans += (third - cnt);
        first += (third - cnt);
        ans += (first - cnt);
    }else if(third <= cnt && first > cnt){
        ans += (first - cnt);
        second += (first - cnt);
        ans += (second - cnt);
    }
    cout << ans << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}