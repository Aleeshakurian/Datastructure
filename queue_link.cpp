#include<iostream>
using namespace std;
class queuel
{
	public: int item;
		struct node
		{
			int data;
			node *link;
		}*front,*rear;
		queuel()
		{
			front=new node;
			rear=new node;
			front=NULL;
			rear=NULL;
		}
		void insert();
		void display();
		int delt();
};
void queuel::insert()
{
	node *r,*temp;
	r=new node;
	temp=new node;
	cout<<"Enter item:";
	cin>>item;
	r->data=item;
	r->link=NULL;
	if(front==NULL)
		front=0;
	else
	{
		for(temp=front;temp->link!=NULL;temp=temp->link);
		temp->link=r;
	}
	rear=0;
}
void queuel::display()
{
	node *temp;
	temp=new node;
	if(front>rear)
	{
		cout<<"QUEUE EMPTY\n";
	}
	else
	{
		for(temp=front;temp->link!=NULL;temp=temp->link)
			cout<<temp->data<<"->";
		cout<<temp->data<<"\n";
	}
}
int queuel::delt()
{
	node *temp;
	temp=new node;
	int d;
	if(front==NULL)
	{
		cout<<"QUEUE EMPTY\n";
	}
	else
	{
		temp=front;
		d=temp->data;
		front=front->link;
		delete temp;
		return d;
	}
}
main()
{
	queuel ob;
	int ch;
	cout<<"___________QUEUE AS A SLL__________\n";
	cout<<"1.INSERT\n2.DELETE\n3.DISPLAY\n3.EXIT\n";
	do
	{
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:ob.insert(); break;
			case 2:ob.delt();break;
			case 3:ob.display();break;
			case 4:cout<<"EXIT!!!!!\n"; break;
		}
	}while(ch!=4);
}
