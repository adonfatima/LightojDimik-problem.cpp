
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll s=1;
        ll n;
        cin>>n;
        for(ll i=1;i<=n;i++){
            s=s*i;
        }
        cout<<s<<endl;
    }
}
