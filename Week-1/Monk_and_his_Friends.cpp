#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t, n, m;
    cin >> t;
    for(ll i=0;i<t;i++) {
        cin >> n >> m;
        set<ll> st;

        for(ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            st.insert(x);
        }

        for(ll i = 0; i < m; i++) {
            ll x;
            cin >> x;
            if(st.find(x) != st.end()) {
                cout << "YES"<<endl;
            } else {
                cout<< "NO"<<endl;
            }
            st.insert(x);
        }
    }
}