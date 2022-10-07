/*Arpit Blagan*/
#include<bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
#define rep(i,s,e) for(int i=s;i<e;i++)
#define lli long long int
#define ll long long
const ll INF=1e18;
const ll mod=1e9+7;
const int N= 1e5+5;
//A. And Matching (1500)rating problem...

int cc(int ele,int n){
	//returning xor of the number...
	return (ele^(n-1));
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;vector<int>a(n/2),b(n/2);
		if(k==0){
			for(int i=0;i<n/2;i++){
				a[i]=i;b[i]=cc(i,n);
			}
		}else if(k>0&&k<n-1){
			int mi=min(k,cc(k,n));
			for(int i=0;i<n/2;i++){
				if(i!=0&&i!=mi){
					a[i]=i;b[i]=cc(i,n);
				}
			}
			a[0]=0;b[0]=cc(k,n);
			a[mi]=k;b[mi]=n-1;
		}
		else{
			if(n==4){cout<<-1<<"\n";continue;}
			a[0] = n - 2;
            b[0] = n - 1;

            a[1] = 1;
            b[1] = n - 3;

            a[2] = 0;
            b[2] = 2;

            for(int i=3; i<n/2; i++){
                a[i] = i;
                b[i] = cc(i,n);
            }

		}
		for(int i=0;i<n/2;i++){cout<<a[i]<<" "<<b[i]<<"\n";}
	}
	return 0;
}