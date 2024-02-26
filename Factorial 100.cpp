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
        int cnt5=0;
        for(int i=1;i<=n;i++){
            int x=i;
            while(x%5==0){
                cnt5++;
                x/=5;
            }
        }
        cout<<cnt5<<endl;
    }
}
