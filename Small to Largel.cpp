#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        cout<<"Case "<<i<<": ";
        int arr[3]={n1,n2,n3};
        sort(arr,arr+3);
        for(int j=0;j<3;j++){
            cout<<arr[j];
            if(j<2)
                cout<<" ";
        }
        cout<<endl;
    }
}
