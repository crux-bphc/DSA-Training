#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    map<string, int> freq;
    for(ll i=0;i<n;i++) {
        string str;
        cin>>str;
        if(freq[str] > 0) {
            cout << str + to_string(freq[str]) << endl;
            freq[str]++;
        } else {
            freq[str]=1;
            cout << "OK" << endl;
        }

    }
}