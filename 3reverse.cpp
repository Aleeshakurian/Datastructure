#include<iostream>
using namespace std;
class link
{
	private:
		struct node
		{
			int data;
			node *link;
		}*p;
	public:
		link();
		void addbeg(int num);
		void reverse();
		void display();
		int count();
		~link();
}ob;
link::link()
{
	p=NULL;
}
void link::addbeg(int num)
{
	node *temp;
	temp=new node;
	if(p==NULL)
	{
		temp->data=num;
		temp->link=NULL;
		p=temp;
	}
	else
	{ 
		temp->data=num;
		temp->link=p;
		p=temp;
	}
}
void link::reverse()
{
	node *q,*s,*r;
	q=p;
	r=NULL;
	while(q!=NULL)
	{
		s=r;
		r=q;
		q=q->link;
		r->link=s;
	}
	p=r;
}
void link::display()
{
	node *temp;
	for(temp=p;temp->link!=NULL;temp=temp->link)
	{
		cout<<temp->data<<"->";

	}
	cout<<temp->data;
}
int link::count()
{
	node *temp=p;
	int c=0;
	while(temp!=NULL)
	{
		temp=temp->link;
		c++;
	}
	return c;
}
link::~link()
{
	node *q;
	while(p!=NULL)
	{
		q=p->link;
		delete p;
		p=q;

	}
}
main()
{
	int n,a;
	cout<<"Enter limit:";
	cin>>n;
	cout<<"Enter the element:";
	for(int i=0;i<n;i++)
	{ 
		cin>>a;
		ob.addbeg(a);
	}
	cout<<"Elements are:";
	ob.display();
	cout<<"\n";
	cout<<"Reversed elements are:";
	ob.reverse();
	ob.display();
	cout<<"\n";
}

