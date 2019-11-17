#include <bits/stdc++.h>
using namespace std;
long long int dp(int n){
	long long int arr[n+1];
	arr[1]=1;
	int i3,i5;
	int i2=i3=i5=1;
	long long int mul2=2;
	long long int mul3=3;
	long long int mul5=5;
	for(int i=2;i<n+1;i++){
		arr[i]=min(min(mul2,mul3),mul5);
		if(arr[i]==mul2){i2++;mul2=2*arr[i2];}
		if(arr[i]==mul3){i3++;mul3=3*arr[i3];}
		if(arr[i]==mul5){i5++;mul5=5*arr[i5];}
	}	
	return arr[n];
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<dp(n)<<endl;
	}
}
