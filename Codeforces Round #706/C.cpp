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
    vector<int> nums1, nums2;
    for(int i = 0; i < 2*n; i++){
        int x, y;
        cin >> x >> y;
        if(x == 0){
            if(y < 0) nums2.push_back(-y);
            else nums2.push_back(y);
        }else{
            if(x < 0) nums1.push_back(-x);
            else nums1.push_back(x);
        }
    }
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    double ans = 0;
    for(int i = 0; i < n; i++){
        ans += sqrt((LL)nums1[i]*nums1[i] + (LL)nums2[i]*nums2[i]);
    }
    printf("%.15f\n", ans);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}