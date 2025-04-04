#include<bits/stdc++.h>
using namespace std;
#define ll long long
 

bool spellCheck(string s, int n) 
{
    if(n!=5)
    return 0;
    sort(s.begin(), s.end());
    if(s == "Timru")
    return 1;
    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<(spellCheck(s, n)?"YES" : "NO")<<endl;
    }
    return 0;
}
