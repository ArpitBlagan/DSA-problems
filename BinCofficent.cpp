/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const int mod=1e9+7;
//nCr is nothing but number of ways to choose r numbers from total n numbers.
//nC0||nC1==1.
ll dp[51][51];
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//BaseCase.
	dp[0][0]=1;
	for(int i=1;i<51;i++){
		//nC0=1.
		dp[i][0]=1;
		for(int j=1;j<51;j++){
			dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
		}
	}
	//5C2 ( (5*4*3*2)/((2)*(2*3)) )which is 10.
	cout<<dp[5][2];
	return 0;
}