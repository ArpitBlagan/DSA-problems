/*ॐ Arpit Blagan ॐ*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
//C. Counting Orders codeforces
//Question Link: https://codeforces.com/contest/1828/problem/C
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	ll t;cin>>t;
	while(t--){
		int n;cin>>n;vector<int>a(n),b(n);
		for(int i=0;i<n;i++){cin>>a[i];}
		for(int i=0;i<n;i++){cin>>b[i];}
		sort(a.begin(),a.end());sort(b.rbegin(),b.rend());
		ll res=1;
		for(int i=0;i<n;i++){
			int count=a.size()-(upper_bound(a.begin(),a.end(),b[i])-a.begin());
			res=(res*max(count-i,0)%mod)%mod;
		}
		cout<<res<<"\n";
	}
	return 0;
}