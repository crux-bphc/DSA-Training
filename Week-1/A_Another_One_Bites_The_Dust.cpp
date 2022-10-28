#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll a,b,c;
    cin>>a>>b>>c;
    ll res= 2*c;
    if(a==b){
        res+=2*a;
    } else {
        res+=2*min(a,b)+1;
    }
    cout<<res<<endl;
}