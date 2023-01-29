//1A - Theatre Square
#include<iostream>
using namespace std;

int main()
{
     long long int n,m,a,length,weidth;
     cin>>n>>m>>a;
     if(n%a==0)
     {
         length=n/a;
     }
       else{
           length=n/a+1;
       }
            if(m%a==0){
                weidth=m/a;
            }
            else{
                weidth=m/a+1;
            }

            cout<<length*weidth;
      return 0;
}
