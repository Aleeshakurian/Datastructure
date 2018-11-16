#include<iostream>
using namespace std;
class single
{
	private:
		struct node
		{
			int data;
			node *link;
		}*p;
	public:
		single();	
		void append(int);
		void addbeg(int);
		void addafter(int,int);
		void display();
		int count();
		void del(int);
		~single();
};
single::single()
{
	p=NULL;
}
void single::append(int num)
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
void single::addbeg(int num)
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
void single::addafter(int loc,int num)
{
	int i;
	node *temp,*r;
	temp=p;
	for(i=0;i<loc;i++)
	{
		temp=temp->link;
		if(temp==NULL)
		{
			cout<<"Less thaan"<<loc<<"elements\n";

		}

	}
	r=new node;
	r->data=num;
	r->link=temp->link;
	temp->link=r;
}
void single::del(int num)
{
	node *old,*temp;
	temp=p;
	while(temp!=NULL)
	{
		if(temp->data==num)
		{
			if(temp==p)
				p=temp->link;
			else
				old->link=temp->link;
			delete temp;
			return;
		}
		else
		{
			old=temp;
			temp=temp->link;
		}
	}
	cout<<"NOT FOUND\n";	
}
int single::count()
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
void single::display()
{
	node *temp;
	for(temp=p;temp->link!=NULL;temp=temp->link)
	{
		cout<<temp->data<<"->";

	}
	cout<<temp->data;

}
single::~single()
{
	node *q;
	while(q!=NULL)
	{
		q=q->link;
		delete p;
		p=q;
	}
}
main()
{
	single ob;
	int a,n,ch,loc,m,b,d;
	cout<<"SINGLY LINKED LIST";
	do{
		cout<<"\n1.ADD BEG\n2.APPEND\n3.ADD AFTER\n4.DELETE\n5.EXIT\n";
		cout<<"Enter choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"Enter howmany number of elements to be added first:";
			       cin>>n;
			       cout<<"Enter the element:";
			       for(int i=0;i<n;i++)
			       { 
				       cin>>a;
				       ob.addbeg(a);
			       }
			       cout<<"Elements are :";
			       ob.display();
			       break;
			case 2:cout<<"Enter howmany elements to be added last:";
			       cin>>n;
			       cout<<"Enter elements:";
			       for(int i=0;i<n;i++)
			       {
				       cin>>a;
				       ob.append(a);
			       }
			       cout<<"Nummber of elements:"<<ob.count()<<"\n";
			       cout<<"Elements are:";
			       ob.display();
			       break;
			case 3:cout<<"Enter number of elements to be inserted:";
			       cin>>n;
			       for(int i=0;i<n;i++)
			       {
				       cout<<"Enter position: ";
				       cin>>loc;
				       cout<<"Enter the element:\n";
				       cin>>a;
				       ob.addafter(loc,a);
			       }
			       cout<<"Number of elements are:"<<ob.count();
			       cout<<"\n";
			       cout<<"Elements are:";

			       ob.display();
			       break;
			case 4:cout<<"Enter the element to be deleted \n";
			       cin>>d;
			       ob.del(d);
			       cout<<"\n";
			       cout<<"Elements are:";
			       ob.display();
			       break;
			case 5:cout<<"EXIT\n";
			       break;
		}
	}while(ch!=5);
}
