/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
//D. Divisibility by 2^n.
//Simply count the number of time every element is divisible by 2 and if the cnt>=n
//it is divisible else it is not.
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;vector<int>arr(n);for(int i=0;i<n;i++){cin>>arr[i];}
		int cnt=0;for(int i=0;i<n;i++){
			int x=arr[i];
			while(x%2==0){x/=2;cnt++;}
		}
		vector<int>cc(n,0);
		for(int i=0;i<n;i++){
			int x=i+1;int tt=0;
			while(x%2==0){x/=2;tt++;}
			cc[i]+=tt;
		}sort(cc.rbegin(),cc.rend());
		int ans=0;
		for(auto tt:cc){
			if(cnt<n){ans++;cnt+=tt;}
		}
		if(cnt<n){cout<<-1<<"\n";}else{cout<<ans<<"\n";}
	}
	return 0;
}