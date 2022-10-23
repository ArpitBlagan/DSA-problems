/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
//Factorial Divisibilty D Problem....
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
		int n,x;cin>>n>>x;
		vector<int>cnt(x+1,0);
		for(int i=0;i<n;i++){
			int a;cin>>a;cnt[a]++;
		}bool ok=true;
		for(int i=1;i<x;i++){
			if(cnt[i]%(i+1)){ok=false;}
			cnt[i+1]=cnt[i]/(i+1);
		}if(ok){cout<<"YES\n";}else{cout<<"NO\n";}
	return 0;
}