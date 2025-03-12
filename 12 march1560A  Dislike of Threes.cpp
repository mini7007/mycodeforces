#include<bits/stdc++.h>
using namespace std;
#define ll long long
 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        int i=0,j=0;
        while(j!=k)
        {
            i++;
            if(i%3!=0 && i%10!=3)
            j++;
        }
        cout<<i<<endl;
    }
    return 0;
}