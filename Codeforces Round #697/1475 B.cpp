#include <iostream>
using namespace std;

typedef long long LL;
int t;

int main(){
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int n;
		scanf("%d", &n);
		int a = n % 2020;
		int b = n / 2020;
		if(a <= b) printf("YES\n");
		else printf("No\n");
	}
	return 0;
}