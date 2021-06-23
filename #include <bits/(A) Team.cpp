#include <bits/stdc++.h>
#define ll long long
 
 
using namespace std;
 
int main() {
    int n, a, b, c, number(0);
    cin>>n;
 
    while(n--) {
        cin>>a>>b>>c;
        if((a+b+c)>=2) {
            ++number;
        }
    }
    
    cout<<number;
 
    return 0;
}
