#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=sqrt(n);
        if(ans*ans==n){
            cout<<ans<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}

