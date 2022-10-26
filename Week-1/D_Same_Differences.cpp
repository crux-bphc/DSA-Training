#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    for(ll i =0;i<t;i++) {
        ll n;
        cin >> n;
        ll res=0;
        map<ll , ll> mp;
        for(ll j = 0; j < n; j++) {
            int x;
            cin >> x;
            x -= j;
            res+=mp[x];
            mp[x]++;
        }
        cout << res << endl;
    }

}