#include<bits/stdc++.h>
typedef long long ll;
#define MOD 1000000007
#define pb push_back
using namespace std;

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;	cin>>t;
	while(t--){
		ll n,m;	cin>>n>>m;
		ll arr[n];
		ll freq[m+1]={0};
		ll lcm;
		cin>>arr[0];
		freq[arr[0]]++;
		lcm=arr[0];
		for(ll i=1;i<n;i++){
			cin>>arr[i];
			freq[arr[i]]++;
			lcm=(arr[i]*lcm)/gcd(arr[i],lcm);
		}
		ll ans=1;
		ll currlcm=lcm;
		for(ll i=1;i<=m;i++){
			if(freq[i]!=0)
				continue;
			ll temp=(i*lcm)/gcd(i,lcm);
			if(temp>currlcm){
				currlcm=temp;
				ans=i;
			}
		}
		cout<<ans<<"\n";
	}	
	return 0;
}