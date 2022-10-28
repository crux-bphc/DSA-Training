#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    bool flag=true;
    for(ll i=0;i<n-1;i++){
        if(s[i]>s[i+1]){
            s.erase(i,1);
            flag=false;
            break;
        }
    }
    if(flag)
        s.erase(s.length()-1, 1);
    cout<<s<<endl;
    return 0;
}
