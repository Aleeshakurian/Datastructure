#include<iostream>
using namespace std;
class cqueue
{
	public:
		int front,rear,n,q[20];
		cqueue()
		{
			front=0;
			rear=0;
		}
		void insert();
		void delt();
		void display();
};
void cqueue::insert()
{
	int item;
	if((rear==n&&front==1)||(rear+1==front))
	{
		cout<<"QUEUE FULL\n";
	}
	else
	{
		cout<<"Enter item:";
		cin>>item;
		rear=rear+1;
		if(rear==n+1)
			rear=1;
		q[rear]=item;
		cout<<item<<" "<<"Inserted\n";
		if(front==0)
			front=1;
	}
}
void cqueue::delt()
{
	int item;
	if(front==0)
	{
		cout<<"QUEUE EMPTY\n";
	}
	else
	{
		if(front!=rear)
		{
			item=q[front];
			cout<<item<<" "<<"deleted\n";
			front++;
			if(front==n+1)
				front=1;
		}
		else
		{
			item=q[front];
			cout<<item<<" "<<"Deleted\n";
			front=0;
			rear=0;
		}
	}
}
void cqueue::display()
{
	int i;
	if(front==0)
	{
		cout<<"QUEUE EMPTY\n";
	}
	else
	{
		cout<<"Queue elements are:";
		for(i=front;i!=rear;)
		{
			cout<<q[i]<<" ";
			if(i==n)
				i=1;
			else
				i++;
		}
		cout<<q[rear]<<"\n";
	}
}
main()
{
	cqueue ob;
	cout<<"Enter size:";
	cin>>ob.n;
	int ch;
	cout<<"____________CIRCULAR QUEUE_________\n";
	cout<<"1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n";
	do
	{
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:ob.insert();
			       break;
			case 2:ob.delt();
			       break;
			case 3:ob.display();
			       break;
			case 4:cout<<"EXIT!!!\n";
			       break;
		}
	}while(ch!=4);
}
