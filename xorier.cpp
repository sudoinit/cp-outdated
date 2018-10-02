/*input
1
5
2 4 8 1 3
*/

#include <iostream>

using namespace std;
int main(){
	int t;
	cin >> t;

	while(t--){
		long long int n;
		cin >> n;
		long long int a[n];
		long long int f[1000010] = {0};

		long long int odd = 0;
		long long int even = 0;
		long long int ans = 0;
		for(int i = 0; i < n; i++){
			cin  >> a[i];
			f[a[i]]++;

			if(a[i] & 1)
				odd++;
			else
				even++;
		}

		for(int i = 0; i < n; i++){
			if(a[i] & 1)
				ans += odd;
			else
				ans += even; // for every even no. there are totally no. of even  as pairs similarly for odd

			ans -= f[a[i] ^ 2]; // removing xor with result 2
			ans -= f[a[i]]; // removing xor with result 0
		}

		ans = ans >> 1; // shifting by a bit to divide by 2

		cout << ans << endl;

	}

}
