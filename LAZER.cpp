#include<bits/stdc++.h>
typedef long long ll;
#define MOD 1000000007
#define pb push_back
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t; cin>>t;
	while(t--){
		ll n,q; cin>>n>>q;
		ll a[n+1];
		for(ll i=1;i<=n;i++){
			cin>>a[i];
		}
		vector< pair< pair<ll,ll> , pair<ll,ll> > >lines;
		for(ll i=1;i<n;i++){
			lines.pb({{i,a[i]},{i+1,a[i+1]}});
		}
		while(q--){
			ll x1,x2,y,count=0;	cin>>x1>>x2>>y;
			for(auto it:lines){
				if(it.first.first<x1)
					continue;
				if(it.first.first>=x2)
					break;
				if((y>=it.first.second && y<=it.second.second) || (y<=it.first.second && y>=it.second.second)){
					count++;
				}
			}
			cout<<count<<"\n";
		}

	}	
	return 0;
}