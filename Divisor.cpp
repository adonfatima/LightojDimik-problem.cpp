#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<= t;i++){
    int n;
    cin>>n;

    set<int>s;
    s.insert(n) ;
    for(int j=1;j<n;j++){
        if(n%j==0){
            s.insert(j);
            //s.insert(n/j);

        }
    }
    cout<<"Case "<<i<<": ";

        for(auto it:s){

            cout<<it<<" ";

        }
        cout<<endl;
    }

}

