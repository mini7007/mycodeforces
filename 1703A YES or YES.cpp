#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        if(s=="yes")
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}