#include<iostream>
using namespace std;
class stack
{
	public:
		int n,a[20],item,top;
		stack()
		{
			top=0;
		}
		void push(int);
		void pop();
		void display();
};
void stack::push(int item)
{
	if(top==n)
        {
          cout<<"STACK IS FULL\n";
	}
	else
	{
		cout<<"Enter item:";
		cin>>item;
		top=top+1;
		a[top]=item;
		cout<<item<<" "<<"pushed\n";
	}
}
void stack::pop()
{
	if(top==0)
	{
		cout<<"STACK EMPTY\n";
	}
	else
	{
		item=a[top];
		cout<<item<<" "<<"poped\n";
		top=top-1;
	}
}
void stack::display()
{
	int i;
	if(top==0)
	{
		cout<<"STACK EMPTY\n";
	}
	else
	{
		for(i=1;i<=top;i++)
		{
			cout<<a[i]<<"\n";
		}
	}
}
main()
{
	stack s;
	int c,n,item,z;
	cout<<"Enter size:";
	cin>>s.n;
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
