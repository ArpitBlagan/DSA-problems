/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;int cnt;
void dfs(int i,string str){
	if(i==str.length()){cnt++;
		cout<<str<<"\n";return;
	}
	for(int in=i;in<str.length();in++){
		swap(str[in],str[i]);dfs(i+1,str);swap(str[in],str[i]);
	}
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string str;cin>>str;cnt=0;dfs(0,str);cout<<cnt<<"\n";
	return 0;
}