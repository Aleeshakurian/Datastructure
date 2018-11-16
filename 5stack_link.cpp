#include<iostream>
using namespace std;
class stack
{
	public:
		int n,item;
		struct node
		{
			int data;
			node *link;
		}*top;
		stack()
		{
			top=NULL;
		}
		void push(int);
		void pop();
		void display();
};
void stack::push(int item)
{
		node *temp;
                temp=new node;
		cout<<"Enter Item:";
		cin>>item;
		temp->data=item;
		temp->link=top;
		cout<<temp->data<<" "<<"pushed \n";
		top=temp;
	

}
void stack::pop()
{
	node *temp;
	temp=new node;
	if(top==NULL)
	{
		cout<<"STACK EMPTY\n";
	}
	else
	{
		cout<<top->data<<" "<<"poped\n";
		delete top;
		top=top->link;
	}
}
void stack::display()
{
	node *r;
	r=new node;
	if(top==NULL)
	{
		cout<<"STACK EMPTY\n";
	}
	else
	{
		for(r=top;r->link!=NULL;r=r->link)
		{
			cout<<r->data<<"->";
		}
		cout<<r->data<<"\n";

	}
}
main()
{
	stack s;
	int c,n,item,top;
	do
	{
		cout<<"******STACK******\n";
		cout<<"1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n";
		cout<<"Enter your choice:";
		cin>>c;
		switch(c)
		{
			case 1:s.push(item);
				break;
			case 2:s.pop();
			       break;
			case 3:s.display();
			       break;
			case 4:cout<<"EXIT!!!!\n";
			       break;
		}
	}while(c!=4);
}
