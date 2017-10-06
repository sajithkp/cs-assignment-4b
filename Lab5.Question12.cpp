#include<iostream>
using namespace std;
int hcf(int a,int b )
{ 
	if(b!=0)
	{
              return hcf(b,a%b);
	}  
            else
            {
              return a;
            }  
}
int main()
{
int m,n,lcm;
cout<<"enter positive intiger "<<endl;
cin>>m>>n;
lcm=(m*n)/hcf(m,n);
cout<<"LCM of numbers are"<<lcm;
return 0;
