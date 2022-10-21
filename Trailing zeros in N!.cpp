/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
//Factorial Trailing Zeroes
//The solution is number of 5 multiples there in range of given number..
//ex 5! is 120 so ans will 1.
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;cin>>n;
	int ans=0;for(int i=5;i<=n;i*=5;){ans+=n/i;}cout<<ans<<"\n";
	return 0;
}