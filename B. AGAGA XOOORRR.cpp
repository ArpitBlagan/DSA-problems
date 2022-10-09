/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=998244353,N=2*1e5+1;
//B - AGAGA XOOORRR
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;vector<ll>arr(n);int ans1=0;
		for(int i=0;i<n;i++){cin>>arr[i];ans1^=arr[i];}
		if(!ans1){cout<<"YES\n";continue;}
		int ans2=0;int cnt=0;for(int i=0;i<n;i++){
			ans2^=arr[i];
			if(ans1==ans2){ans2=0;cnt++;}
		}
		if(cnt>1){cout<<"YES\n";}else{cout<<"NO\n";}
	}
	return 0;
}