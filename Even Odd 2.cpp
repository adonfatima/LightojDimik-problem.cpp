
#include <bits/stdc++.h>
#include<string>
#define endl "\n"
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL),cout.tie(NULL);
     int test;
     cin>>test;
     for(int i=1;i<=test;i++){
     string s;
     cin>>s;
     int sz=s.length();
     int lastdigit=s[sz-1]-'0';
     if(lastdigit%2==0){
    cout<<"even"<<endl;
     }
     else{
         cout<<"odd"<<endl;
     }
     }

    return 0;
}
