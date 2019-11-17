#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
#define ll long long
#define m 1000000007
using boost::multiprecision::cpp_int;
using namespace std;
cpp_int dp(int n){
	cpp_int arr[n+1]={0};
	arr[0]=arr[1]=1;
	for(int i=2;i<n+1;i++){
		for(int j=0;j<i;j++){
			arr[i]+=(arr[j]*arr[i-j-1]);
		}
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