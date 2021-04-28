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
    vector<int> a(n);
    int maxinum = 0;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        maxinum = max(maxinum, nums[i]);
        a[i] = maxinum;
    }
    int right = n-1, end = n;
    while(right >= 0){
        int num = a[right];
        while(a[right] == num) right--;
        for(int i = right+1; i < end; i++){
            cout << nums[i] << " ";
        }
        end = right + 1;
    }
    cout << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}