#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n;
    cin >> n;
    vector<int> nums(n), left(n+1, 0);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        left[i+1] = left[i] ^ nums[i];
    }
    for(int i = 0; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            if(left[i] == (left[j] ^ left[i]) && left[i] == (left[n] ^ left[j])){
                cout << "YES" << endl;
                return;
            }
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