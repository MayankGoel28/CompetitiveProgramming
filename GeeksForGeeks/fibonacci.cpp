#include <bits/stdc++.h>
#define ll long long
#define m 1000000007
using namespace std;
long long int dp(int n){
	long long int fib[n+1];
	fib[1]=fib[2]=1;
	for(int i=3;i<=n;i++)fib[i]=(fib[i-1]+fib[i-2])%m;
	return fib[n];
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<dp(n)<<endl;
	}
}