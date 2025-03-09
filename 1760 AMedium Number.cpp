#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> num = {a,b,c};
        sort(num.begin(),num.end());
        cout<<num[1]<<endl;
    }
    return 0;
}