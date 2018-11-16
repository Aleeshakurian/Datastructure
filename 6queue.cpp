#include<iostream>
using namespace std;
class queue
{
	int n,front,rear,item,i,q[10];
	public:
	queue()
	{
		front=0;
		rear=0;
	};
	void read();
	void insert(int);
	void delt();
	void display();
};
void queue::read()
{
	cout<<"Enter size:";
	cin>>n;
}
void queue::insert(int item)
{
	if(rear==n)
	{
		cout<<"QUEUE IS FULL\n";
	}
	else
	{
		cout<<"Enter element:";
		cin>>item;
		rear=rear+1;
		q[rear]=item;
		cout<<item<<" "<<"Inserted\n";
	}
	if((front==0)&&(rear>0))
	{
		front=1;
	}
}
void queue::delt()
{
	if(front>rear)
	{
		front=0;
		rear=0;
		cout<<"QUEUE EMPTY\n";
	}
	else
	{
		if(front!=0)
		{
			item=q[front];
			cout<<item<<" "<<"deleted\n";
			front=front+1;
		}
		else
		{
			cout<<"QUEUE EMPTY\n";
		}
	}
}
void queue::display()
{
	int i;
	if(front>rear)
	{
		cout<<"QUEUE EMPTY\n";
	}
	else
	{
		cout<<"Queue elements are:\n";
		for(i=front;i<=rear;i++)
		{
			cout<<q[i]<<"\n";
		}
	}
}
main()
{
	queue ob;
	int ch,n,item;
	ob.read();
	cout<<"*****QUEUE*****\n";
        cout<<"1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n";
	do
	{
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:ob.insert(item);
			       break;
			case 2:ob.delt();
			       break;
			case 3:ob.display();
			       break;
			case 4:cout<<"EXITT!!!!\n";
			       break;
		}
	}while(ch!=4);
}
