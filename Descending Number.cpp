
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    int cnt=0;
    for(int i=1000;i>=1;i--){
        cout<<i<<" ";
        cnt++;
        if(cnt%5==0){
            cout<<endl;
        }
    }
}
