/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const ll mod=1e9+7;
const int N= 1e5+5;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;vector<int>arr(n);ll sum=0,xo=0;
		for(int i=0;i<n;i++){cin>>arr[i];sum+=arr[i];xo^=arr[i];}xo*=2ll;
		if(xo==sum){cout<<0<<"\n";}
		else if(xo==0){
			cout<<1<<"\n"<<sum<<"\n";
		}
		else{vector<ll>ans;xo/=2;
			ans.push_back(xo);ans.push_back((sum+xo));
			cout<<ans.size()<<"\n";
			for(auto it:ans){cout<<it<<" ";}cout<<"\n";
		}
	}
	return 0;
}