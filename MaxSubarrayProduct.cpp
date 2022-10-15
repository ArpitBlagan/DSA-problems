/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
const int N=2e5+1;
//Maximum product of the subarray problem.
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;cin>>n;vector<int>arr(n);for(int i=0;i<n;i++){cin>>arr[i];}
	int ans=arr[0];
	for(int i=0,ima=ans,imi=ans,i<n;i++){
		if(arr[i]<0){swap(imi,ima);}
		imi=min(imi,arr[i]*imi);
		ima=max(ima,arr[i]*ima);
		ans=max(ams,ima);
	}
	cout<<ans<<"\n";
	return 0;
}