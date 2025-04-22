#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a[4];
        for(int i=0;i<4;i++)
            cin >> a[i];
            
        int maxa=max(a[0],a[1]);
        int mina=min(a[0],a[1]);
        
        int maxb=max(a[2],a[3]);
        int minb=min(a[2],a[3]);
        
        if(mina>maxb | minb>maxa)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
