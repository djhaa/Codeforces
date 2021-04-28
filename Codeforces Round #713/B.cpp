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
    scanf("%d\n", &n);
    vector<vector<char>> nums(n, vector<char>(n));
    vector<PII> res;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%c", &nums[i][j]);
            if(nums[i][j] == '*'){
                res.push_back({i, j});
            }
        }
        scanf("\n");
    }
    int x1, y1, x2, y2;
    int row1 = res[0].first, col1 = res[0].second;
    int row2 = res[1].first, col2 = res[1].second;
    if(row1 != row2 && col1 != col2){
        x1 = row1, y1 = col2;
        x2 = row2, y2 = col1;
    }else if(row1 == row2){
        if(row1 == 0){
            x1 = row1 + 1, y1 = col1;
            x2 = row1 + 1, y2 = col2;
        }else{
            x1 = row1 - 1, y1 = col1;
            x2 = row1 - 1, y2 = col2;
        }
    }else{
        if(col1 == 0){
            x1 = row1, y1 = col1 + 1;
            x2 = row2, y2 = col1 + 1;
        }else{
            x1 = row1, y1 = col1 - 1;
            x2 = row2, y2 = col1 - 1;
        }
    }
    nums[x1][y1] = '*';
    nums[x2][y2] = '*';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%c", nums[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}