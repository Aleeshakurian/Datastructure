#include<iostream>
using namespace std;
class array
{
	private:
		int *arr;
		int size;
		int count;
	public:
		array();
		array(int sz);
		void add(int num);
		static void sort(int *a,int sz);
		void merge(array &a,array &b);
		void display();
		~array();
};
array::array()
{
	count=size=0;
	arr=NULL;
}
array::array(int sz)
{
	count=0;
	size=sz;
	arr=new int[sz];
}
void array::add(int num)
{
	if(count<size)
	{

		arr[count]=num;
		count++;
	}
	else
		cout<<"ARRAY FULL\n";
}
void array::display()
{
	cout<<"Elements are:";
	for(int j=0;j<count;j++)
		cout<<arr[j]<<" ";
	cout<<"\n";
}
void array::merge(array &a,array &b)
{
	sort(a.arr,a.size);
	sort(b.arr,b.size);
	size=a.count+b.count;
	arr=new int[size];
	int i,j,k;
	for(i=j=k=0;j<a.count||k<b.count;)
	{
		if(a.arr[j]<=b.arr[k])

			arr[i++]=a.arr[j++];
		else
			arr[i++]=b.arr[k++];
		count++;
		if(j==a.count||k==b.count)
			break;

	}
	for(;k<b.count;)
	{
		arr[i++]=b.arr[k++];
		count++;
	}
}

void array::sort(int *a,int sz)

{
	int temp;
	for(int i=0;i<=sz-2;i++)
	{
		for(int j=i+1;j<=sz-1;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}	
		}
	}
}
array::~array()
{
	delete arr;
}
main()
{

	cout<<"***** MERGE SORT*********\n";
	int i,n1,n2,num1,num2;
	cout<<"Enter the limit for first array:";
	cin>>n1;
	cout<<"\n";
	array a(n1);
	cout<<"Enter number:";
	for(i=0;i<n1;i++)
	{
		cin>>num1;
		a.add(num1);
	}
	cout<<"\n";
	cout<<" First array:"<<endl;
	a.display();
	cout<<"\n";
	cout<<"Enter the limit for second array:";
	cin>>n2;
	cout<<"\n";
	array b(n2);
	cout<<"Enter numbers:";
	for(i=0;i<n2;i++)
	{
		cin>>num2;
		b.add(num2);
	}
	cout<<"\n";
	cout<<"Second array:";
	b.display();
	cout<<"\n";
	array c;
	c.merge(a,b);
	cout<<"Array after sorting:\n";
	c.display();
	cout<<"\n";
}
