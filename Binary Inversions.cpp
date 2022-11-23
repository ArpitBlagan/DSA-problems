/*ॐ Arpit Blagan ॐ*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e5+7;
ll ans(vector<int>&arr,int n){
	ll ans=0;int cnt=0;
	for(int i=n-1;i>=0;i--){
		if(arr[i]==0){cnt++;}
		else{ans+=cnt;}
	}return ans;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;vector<int>arr(n);for(int i=0;i<n;i++){cin>>arr[i];}
		ll ff=ans(arr,n);
		for(int i=0;i<n;i++){
			if(arr[i]==0){
				arr[i]=1;ff=max(ff,ans(arr,n));arr[i]=0;break;
			}
		}
		for(int i=n-1;i>=0;i--){
			if(arr[i]==1){
				arr[i]=0;ff=max(ff,ans(arr,n));arr[i]=1;break;
			}
		}
		cout<<ff<<"\n";
	}
	return 0;
}