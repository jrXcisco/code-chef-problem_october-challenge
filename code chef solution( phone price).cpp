#include <iostream>
using namespace std;

int main() {
	  int n;
	  int b;
cout<<"enter how many number as  input";
cin>>n;
int count=1;
int a[100];
for( int i=0;i<=n-1;i++)
{
cin>>a[i];
}
a[0]=375;
for(int j=0; j<=n-1; j++)
{
if(a[0]>a[j+1])
{
count++;}
}
for(int j=1; j<=n-1; j++)
{
if(a[n-1]<a[j+1])
{
b++;
}
if (b==n-1)
{count++;}
}
cout<<count;


}
