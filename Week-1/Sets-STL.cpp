#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int Q;
    cin >> Q;
    set <ll> st;
    for(int i=0; i<Q; i++) {
        int y;
        ll x;
        cin >> y >> x;
        switch(y){
            case 1:
                st.insert(x);
                break;
            case 2:
                if(st.find(x)!=st.end())
                    st.erase(x);
                break;
            case 3:
                if(st.find(x)!=st.end())
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
                break;
        }
    }


    return 0;
}
