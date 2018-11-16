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
		void append(int num);
		void display();
		void sort(int);	
		~link();
}ob;
link::link()
{
	p=NULL;
}
void link::append(int num)
{
	node *temp,*r;
	temp=new node;
	r=new node;
	if(p==NULL)
	{
		temp=new node;
		temp->data=num;
		temp->link=NULL;
		p=temp;
	}
	else
	{
		for(temp=p;temp->link!=NULL;temp=temp->link);
		{
			r->data=num;
			r->link-NULL;
			temp->link=r;
		}
	}
}
void link::sort(int n)
{
	int temp;
	node *q,*r;
	q=p;
	for(int i=0;i<n-1;i++)
	{
		r=q->link;
		for(int j=i+1;j<n;j++)
		{
			if(q->data>r->data)
			{
				temp=q->data;
				q->data=r->data;
				r->data=temp;
			}
			r=r->link;
		}
		q=q->link;
	}
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

link::~link()
{
	node *q;
	while(p!=NULL)
	{
		q=p->link;
		delete p;
		p=q;

	}	}
main()
{
	int n,a;
	cout<<"Enter limit:";
	cin>>n;
	cout<<"Enter elements:"; 
	for(int i=0;i<n;i++)
	{ 
		cin>>a;
		ob.append(a);
	}
	cout<<"Elements are:";
	ob.display();
	cout<<"\n";
	cout<<"Linked list after sorting:";
	ob.sort(n);
	ob.display();
	cout<<"\n";
}



