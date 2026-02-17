#include<bits/stdc++.h>
using namespace std;
#define ll long long

 int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; 
        cin>>n;
        int c = 0;
        for(int i=0; i<2*n; i++)
        {
            int x;
            cin>>x;
            c += (x % 2);
        }
        cout<<(c == n ? "Yes" : "No")<<endl;
    }
    return 0;
}
