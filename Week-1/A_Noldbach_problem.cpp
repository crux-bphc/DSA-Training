#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
    int n,k;
    cin>>n>>k;

    vector<bool> is_prime(n+1,true);
    is_prime[0]=is_prime[1]=false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(is_prime[i]){
            for(int j=i*i; j<n; j+=i) {
                is_prime[j]=false;
            }
        }
    }
    int nold=0;
    int sum=0;
    int first_prime=0;
    int second_prime=0;
    for(int i = 2; i<=n;i++) {
        if(is_prime[i]){
            if(first_prime==0)
                first_prime=i;
            else if(second_prime==0) {
                second_prime=i;
                if(first_prime + second_prime + 1 <= n && is_prime[first_prime+second_prime+1]) {
                    nold++;
                }
            }
            else {
                first_prime=second_prime;
                second_prime=i;
                if(first_prime + second_prime + 1 <= n && is_prime[first_prime+second_prime+1]) {
                    nold++;
                }
            }
        }
    }
    if(nold>=k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
