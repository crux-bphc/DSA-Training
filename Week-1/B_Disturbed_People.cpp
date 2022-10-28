#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0;i<n;i++) {
        cin >> arr[i];
    }

    ll res=0;
    for(ll i =1;i<n;i++) {
        if(arr[i]==0 and arr[i-1]==1 and arr[i+1]==1){
            res+=1;
            arr[i+1]=0;
        }
    }
    cout <<res<<endl;

    return 0;
}
