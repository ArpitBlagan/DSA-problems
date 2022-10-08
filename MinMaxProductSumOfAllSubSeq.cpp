/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
//Given an array we need to calculate the sum of min*max of all the 
//subsequnces that are there.Ex:{1,1,1}; output=7;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;cin>>n;vector<int>arr(n);for(int i=0;i<n;i++){
		cin>>arr[i];
	}ll ans=0,mx=0;sort(arr.rbegin(),arr.rend());for(int i=0;i<n;i++){
		ans+=mx*arr[i]+arr[i]*arr[i];ans%=mod;
		mx=2*mx+arr[i];mx/=2;mx%=mod;
	}cout<<ans;
	return 0;
}
