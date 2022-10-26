#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    int table=0;
    map <int, int> mp;
    int res=0;
    for(int i=0;i<2*n;i++) {
        int x;
        cin >> x;
        if(mp[x] == 0) {
            mp[x]=1;
            table++;
        } else {
            table --;
            mp[x]--;
        }
        res=max(res,table);
    }
    cout<<res<<endl;

}