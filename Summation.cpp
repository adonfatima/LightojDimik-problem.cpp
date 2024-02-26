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
        int fast=n/10000;
        int last=n%10;
        int ans=fast+last;
        cout<<"Sum = "<<ans<<endl;
    }
}
