/*ॐ Arpit Blagan ॐ*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
//Dividing into Groups
//Link:https://www.codechef.com/problems/DIVIDE_GROUP
bool ok(ll m,vector<ll>&arr,ll k){
	ll num=m*k*1ll;
	for(ll i=0;i<arr.size();i++){
		ll f=min(min(arr[i],m),num);num-=f;
		if(num==0){return true;}
	}return false;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	ll t;cin>>t;
	while(t--){
		ll n,k;cin>>n>>k;vector<ll>arr(n);for(ll i=0;i<n;i++){cin>>arr[i];}
			ll l=0,r=accumulate(arr.begin(),arr.end(),0ll);ll ans=0;
			while(l<=r){
				ll m=l+(r-l)/2;
				if(ok(m,arr,k)){
					ans=m;l=m+1;
				}else{r=m-1;}
			}cout<<ans<<"\n";
		}
	return 0;
}