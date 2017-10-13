#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> socks(n);   
    for(int i = 0; i < n; i++){
        cin >> socks[i];
    }
    sort(socks.begin(),socks.end());
   int pair = 0;
   for(int i = 0; i < 100; i++){
        int n = count(socks.begin(),socks.end(),i+1);
        pair = pair + (n / 2);
    }
    cout << pair;
    return 0;
}
