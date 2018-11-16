#include<iostream>
using namespace std;
const int MAX=10;
class quick
{
	private:
		int a[MAX];
		int count;
	public:
		quick();
		void add(int item);
		int getcount();
		static int split(int *,int,int);
		void quicksort(int lower,int upper);
		void display();
};
quick::quick()
{
	count=0;
	for(int i=0;i<MAX;i++)
		a[i]=0;
}
void quick::add(int item)
{
	if(count<MAX)
	{
		a[count]=item;
		count++;
	}
	else
		cout<<"Quick is full";
}
int quick::getcount()
{
	return count;
}
void quick::quicksort(int lower,int upper)
{
	if(upper>lower)
	{
		int i=split(a,lower,upper);
		quicksort(lower,i-1);
		quicksort(i+1,upper);
	}
}
int quick::split(int *a,int lower,int upper)
{
	int i,p,q,t;
	p=lower+1;
	q=upper;
	i=a[lower];
	while(q>=p)
	{
		while(a[p]<i)
			p++;
		while(a[q]>i)
			q--;
		if(q>p)
		{
			t=a[p];
			a[p]=a[q];
			a[q]=t;
		}
	}

	t=a[lower];
	a[lower]=a[q];
	a[q]=t;
	return q;
}
void quick::display()
{
	for(int i=0;i<count;i++)
	{
		cout<<a[i];
		cout<<"\n";
	}
}
main()
{
	quick ob;
	int s,n;
	cout<<"Enter the size:";
	cin>>s;
	cout<<"Enter the elements:";
	for(int i=1;i<=s;i++)
	{
		cin>>n;
		ob.add(n);
	}
	cout<<"***Quick sort****\n";
	cout<<"Quick before sort:\n;
	ob.display();
	int c=ob.getcount();
	ob.quicksort(0,c-1);
	cout<<"Quick after quick sorting:\n";
	ob.display();
}
