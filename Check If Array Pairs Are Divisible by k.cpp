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
//Check If Array Pairs Are Divisible by k. Given array of even length can we divide
//the array into half where these pairs sum divisible by k.
//For this question solution we need to know that (a+b)%k==0 means a%k=x so b%k=k-x.
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;cin>>n;vector<int>arr(n);for(int i=0;i<n;i++){cin>>arr[i];}
	int mp[k];memset(mp,0,sizeof(mp));
	for(int i=0;i<n;i++){
		int f=arr[i]%k;if(f<0){f+=k;}
		mp[f]++;
	}
	if(mp[0]%2){cout<<"NO\n";}
	bool ok=true;for(int i=1;i<=k/2;i++){
		if(mp[i]!=mp[k-i]){ok=false;break;}
	}if(ok){cout<<"YES\n";}else{cout<<"NO\n";}
	return 0;
}