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
//Problem: 	Maximum Sum Permutation
//CodeChef Contest Code:START91
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int t;cin>>t;
	while(t--){
		ll n,q;cin>>n>>q;
		vector<ll>arr(n);for(ll i=0;i<n;i++){cin>>arr[i];}
		sort(arr.rbegin(),arr.rend());
		vector<pair<ll,ll>>qq;for(ll i=0;i<q;i++){
			ll a,b;cin>>a>>b;qq.push_back({a,b});
		}
		vector<ll>diff(n+2,0);
		for(ll i=0;i<q;i++){
			diff[qq[i].first]+=1;diff[qq[i].second+1]-=1;
		}
		for(ll i=2;i<=n;i++){
			diff[i]+=diff[i-1];
		}vector<pair<ll,ll>>val;
		for(ll i=1;i<=n;i++){
			val.push_back({diff[i],i-1});
		}
		sort(val.begin(),val.end(),[](pair<ll,ll>a,pair<ll,ll>b){
			return a.first>b.first;
		});
		vector<ll>narr(n);
		for(ll i=0;i<val.size();i++){
			narr[val[i].second]=arr[i];
		}
		vector<ll>sum=narr;
		for(ll i=1;i<n;i++){
			sum[i]+=sum[i-1];
		}ll summ=0;
		for(ll i=0;i<q;i++){
			ll a=qq[i].first-1,b=qq[i].second-1;
			if(a==0){
				summ+=sum[b];
			}
			else{
				summ+=(sum[b]-sum[a-1]);
			}
		}cout<<summ<<"\n";for(auto it:narr){cout<<it<<" ";}cout<<"\n";
	}
	return 0;
}