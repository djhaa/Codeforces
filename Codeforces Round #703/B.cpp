#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1005;
using LL = long long;
int t, n;
LL row[N], col[N];

int main(){
    scanf("%d\n", &t);
    while(t--){
        scanf("%d\n", &n);
        for(int i = 0; i < n; i++){
            LL x, y;
            scanf("%lld%lld\n", &x, &y);
            row[i] = x;
            col[i] = y;
        }
        if(n%2==1){
            cout << 1 << endl;
            continue;
        }else{
            sort(row, row+n);
            sort(col, col+n);
            LL a = row[(n-1)/2+1] - row[(n-1)/2] + 1;
            LL b = col[(n-1)/2+1] - col[(n-1)/2] + 1;
            printf("%lld\n", a*b);
        }
    }
    return 0;
}