#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool almost_prime(int x) {
    set<int> pfactors;
    for(int d=2;d*d<=x;d++){
        while(x%d==0){
            pfactors.insert(d);
            x/=d;
        }
    }
    if(x>1)
        pfactors.insert(x);
    return pfactors.size()==2;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >>n;

    int almost_prime_count=0;
    for(int i = 6;i<=n;i++) {
        if(almost_prime(i))
            almost_prime_count++;
    }
    cout<<almost_prime_count<<endl;

    return 0;
}
