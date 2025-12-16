#include <iostream>
using namespace std;

int main() {

int test;

cin>>test;

int flag=0;
int size;

for(int i=0;i<test;i++){

    flag=0;


    cin>>size;

    char str[size+1];

    cin>>str;


    int x2=0;

    int y2 = 0;

    for(int j=0;str[j]!=0&&flag==0;j++){

        if(str[j]=='U'){

            y2++;

        }
        else if(str[j]=='R'){


            x2++;
        }
        else if(str[j]=='D'){


            y2--;
        }
        else if(str[j]=='L'){


            x2--;
        }

        if(x2==1 && y2==1){

            flag=1;

        }

    }

    if(flag==1){

        printf("Yes\n");

    }
    else{

        printf("No\n");

    }
}


}
