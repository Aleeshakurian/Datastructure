#include<iostream>
using namespace std;
class bubble
{
	int i,a[10],j,n;
	public:
	void getdata();
	void sort();
	void display();
};
void bubble::getdata()
{
	cout<<"Enter limit:";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void bubble::sort()
{
	int temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-i-1);j++)

		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void bubble::display()
{
	cout<<"Sorted array is:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
main()
{
	bubble ob;
	ob.getdata();
	ob.sort();
	ob.display();
}

