#include<iostream>
using namespace std;
class array
{
 int a[20],n,i;
public:
void create()
{
cout<<"enter size\n";
cin>>n;
cout<<"enter elements\n";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
}
}
void display()
{
cout<<"Elements are\n";
for(i=0;i<n;i++)
 {
  cout<<a[i];
}
}
void search()
{
int k;
 cout<<"Enter element to be searched\n";
 cin>>k;
for(i=0;i<n;i++)
 {
    if(a[i]==k)
         {
          cout<<"Element found at "<<i+1<<"position";
          break;
          }

else
{
 cout<<"not found\n";
 }
}
}
void sort()
{
int temp;
for(i=0;i<n;i++)
{
 if(a[i]>a[i+1])
   {
    temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
}
}
cout<<"Sorted elements are\n";
for(i=0;i<n;i++)
{
  cout<<a[i]<<"\t";
}
}
void del()
{
  int d;
cout<<"Enter item to be deleted\n";
cin>>d;
for(i=0;i<n;i++)
{
 if(a[i]==d)
 {
  a[i]=a[i+1];
}
n--;
}
}
void rev()
{
cout<<"reversed array\n";
for(i=n;i>0;i--)
{
 cout<<a[i];
}
}

};
main()
{
array ob;
ob.create();
ob.display();
ob.rev();
ob.search();
ob.del();
ob.display();
}
