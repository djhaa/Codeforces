#include <iostream>
#include <vector>
using namespace std;
const int N = 105;
using LL = long long;
int t, n;
LL a[N];

int main(){
    scanf("%d\n", &t);
    while(t--){
        scanf("%d\n", &n);
        for(int i = 1; i <= n; i++){
            LL x;
            scanf("%lld", &x);
            a[i] = a[i-1] + x;
        }
        int cnt = 0;
        bool flag = false;
        for(int i = 1; i <= n; i++){
            if(a[i] < cnt){
                flag = true;
                break;
            }
            cnt += i;
        }
        if(flag) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}