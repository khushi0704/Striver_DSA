#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n;
       cin>>n;
        if(n<3){
           cout<<1<<endl;
        }
        else{
                // find the fibonacci number
                int c;
                int a = 1;
                int b = 1;
                for(int i=3;i<=n;i++){
                        c=a+b;
                        a=b;
                        b=c;
                }
                cout<<c;
        }
}