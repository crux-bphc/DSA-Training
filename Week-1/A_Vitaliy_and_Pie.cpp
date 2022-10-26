#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int res=0;
    map<char, int> keystack;
    for(int i = 0; i < str.length(); i+=2) {
        if(str[i] == tolower(str[i+1])) {
           ;
        } else {
            if(keystack[tolower(str[i+1])] > 0) {
                keystack[tolower(str[i+1])]--;
                keystack[tolower(str[i])]++;
            } else {
                res++;
                keystack[tolower(str[i])]++;
            }
        }
    }
    cout << res<<endl;
    
}