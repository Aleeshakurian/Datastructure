#include<iostream>
using namespace std;
class search
{
	int n,i,j,a[10],k;
	public:
	void getdata();
	void sort();
	void binary();
	void display();
};
void search::getdata()
{
	cout<<"Enter limit:";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
}
void search::sort()
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
void search::binary()
{
	int mid,k,lower=0,upper=n-1,f=0;
	cout<<"Enter the element to search:";
	cin>>k;

		while(lower<=upper)
		{
			mid=(lower+upper)/2;
			if(a[mid]==k)
			{
				f=1;
				break;
			}
			if(a[mid]<k)
			{
				lower=mid+1;
			}
			else if(a[mid]>k)
			{
				upper=mid-1;
			}
		}
	if(f==1)
		cout<<"Element "<<k<<" is found in position "<<mid+1<<"\n";
	else
		cout<<"Element not found\n";
}

void search::display()
{
	cout<<"Sorted array is:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
cout<<"\n";
}
main()
{
	search ob;
	ob.getdata();
	ob.sort();
	ob.display();
	ob.binary();

}
