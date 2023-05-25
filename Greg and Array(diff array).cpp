/*ॐ Arpit Blagan ॐ*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
//Difference Array..
//Codeforces Greg and Array (https://codeforces.com/contest/295/problem/A)
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	
		ll n,m,k;cin>>n>>m>>k;
		vector<ll>arr(n+2);
		for(ll i=0;i<n;i++){cin>>arr[i];}
		vector<pair<ll,ll>>up;vector<ll>val(m);
		for(ll i=0;i<m;i++){
			ll a,b;cin>>a>>b;
			up.push_back({a,b});
			cin>>val[i];
		}
		vector<ll>ok(m+2,0);
		while(k--){
			ll a,b;cin>>a>>b;
			ok[a]+=1;ok[b+1]-=1;
		}
		for(ll i=2;i<=m;i++){ok[i]+=ok[i-1];}
		vector<ll>diff(n+2,0);
		for(ll i=0;i<m;i++){
			if(ok[i+1]){
				ll l=up[i].first,r=up[i].second;
				diff[l]+=(ok[i+1]*val[i]*1ll);
				diff[r+1]-=(ok[i+1]*val[i]*1ll);
			}
		}
		for(int i=1;i<=n;i++){
			diff[i]+=diff[i-1];
			arr[i-1]+=diff[i];
		}
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	
	return 0;
}