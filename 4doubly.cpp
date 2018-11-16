#include<iostream>
using namespace std;
class doubly
{
	public:
		int item;
		struct node
		{
			node *prev;
			node *next;
			int data;
		}*p;
		doubly()
		{
			p=new node;
			p=NULL;
		}
		void append();
		void instbeg();
		void instbw();
		void delt(int);
		void display();
};

void doubly::append()
{
	node *temp,*r;
	temp=new node;
	r=new node;
	cout<<"enter item:";
	cin>>item;
	temp->data=item;
	temp->next=NULL;
	if(p==NULL)
	{
		temp->prev=NULL;
		p=temp;
	}
	else
	{
		for(r=p;r->next!=NULL;r=r->next);
		r->next=temp;
		temp->prev=r;
	}
}
void doubly::instbeg()
{
	node *temp;
	temp=new node;
	cout<<"enter item:";
	cin>>item;

	temp->data=item;
	temp->prev=NULL;
	if(p==NULL)
	{
		temp->next=NULL;
	}
	else
	{
		temp->next=p;
		p->prev=temp;
	}
	p=temp;
}
void doubly::instbw()
{
	node *temp,*r;
	temp=new node;
	r=new node;
	int item,l,i;
	cout<<"Enter item:";
	cin>>item;
	cout<<"Enter location:";
	cin>>l;
	if(p==NULL)

		cout<<"List empty\n";

	else
	{
		r=p;
		for(i=0;i<l;++i)
		{
			r=r->next;
			if(r==NULL)
			{
				cout<<"Lesser number of nodes\n";
				return;
			}
		}
		if(r->next!=NULL)
		{
			(r->next)->prev=temp;
		}
		temp->next=r->next;
		temp->data=item;
		r->next=temp;
		temp->prev=r;
	}
}
void doubly::delt(int item)
{
	node *temp=p;
	while(temp!=NULL)
	{
		if(temp->data==item)
		{
			if(temp==p)
			{
				p=p->next;
				p->prev=NULL;
			}
			else
			{
				if(temp->next==NULL)
				{
					temp->prev->next=NULL;
				}
				else
				{
					(temp->prev)->next=temp->next;
					(temp->next)->prev=temp->prev;
				}
				delete temp;
			}
			cout<<item<<" "<<" element deleted\n";
			return;
		}
		temp=temp->next;
	}
	cout<<item<<" "<<"Not found\n";
}
void doubly::display()
{
	node *temp;
	for(temp=p;temp->next!=NULL;temp=temp->next)
		cout<<temp->data<<"->";
	cout<<temp->data<<"\n";
}
main()
{
	doubly ob;
	int ch,n,d;
	cout<<"__________________DOUBLY LINKED LIST_________________\n";
	cout<<"1.INSERT FRONT\n2.APPEND\n3.INSERT B/W\n4.DELETE\n5.DISPLAY\n6.EXIT\n";
	do
	{
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"Enter how many number of elements:";
			       cin>>n;
			       for(int i=0;i<n;i++)
			       {
				       ob.instbeg();
			       }

			       break;
			case 2:cout<<"Enter how many number of elements:";
			       cin>>n;
			       for(int i=0;i<n;i++)
			       {
				       ob.append();
			       }
			       break;
			case 3:cout<<"Enter how many number of elements:";
			       cin>>n;
			       for(int i=0;i<n;i++)
			       {
				       ob.instbw();
			       }
			       break;
			case 4:cout<<"Enter the item to be deleted:";
			       cin>>d;
			       ob.delt(d);
			       break;

			case 5:ob.display();
			       break;
			case 6:cout<<"EXITT!!\n";
			       break;
		}
	}while(ch!=6);
}

