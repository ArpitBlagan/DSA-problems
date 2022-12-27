/*ॐ Arpit Blagan ॐ*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define int long long
const long long INF=1e18;
const int mod=1e9+7,N=1e5;
//https://www.codechef.com/problems/SBSTR?tab=statement
int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		string str;cin>>str;int k;cin>>k;
		vector<int>cnt(26);int n=str.length();int ans=0;
		for(int i=0;i<n;i++){
			int mx=0,cmx=0,cc=0;
			for(int j=0;j<26;j++){cnt[j]=0;}
			for(int j=i;j<n;j++){
				if(cnt[str[j]-'a']==0){cc++;}
				if(cnt[str[j]-'a']==mx-1){cmx++;}
				if(cnt[str[j]-'a']==mx){
					cmx=1;
					mx+=1;
				}
				cnt[str[j]-'a']++;
				if(cmx==cc&&cc>=k){ans++;}
			}
		}cout<<ans<<"\n";
	}
	return 0;
}