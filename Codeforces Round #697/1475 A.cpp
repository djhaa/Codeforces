#include <iostream>
using namespace std;
 
typedef long long LL;
int t;
 
int main(){
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		LL x;
		scanf("%lld", &x);
		if(x > 1){
            if(x % 2 == 1) cout << "YES" << endl;
            else{
                while(x % 2 == 0) x /= 2;
                if(x > 1) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }else cout << "NO" << endl;
	}
	return 0;
}