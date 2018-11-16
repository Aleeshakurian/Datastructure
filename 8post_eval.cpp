#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class eval
{
	int top,n,a[10];
	char str[20];
	public:
	eval()
	{
		top=0;
	}
	void read();
	void push(int);
	int pop();
	void calc();
	void display();
};
void eval::read()
{
	cout<<"Enter size:";
	cin>>n;
	cout<<"Enter the postfix expression:";
		cin>>str;
}
void eval::push(int c)
{
	if(top==n)
		cout<<"STACK FULL\n";else
		{
			top++;
			a[top]=c;
			cout<<c<<" "<<"inserted\n";
		}
}
int eval::pop()
{
	int j;
	if(top==0)
	{
		cout<<"STACK EMPTY\n";
	}
	else
	{
		j=a[top];
		cout<<j<<" "<<"is poped from the stack\n";
		top--;
	}
	return j;
}
void eval::calc()
{
	int i,m1,m2,m3,l;
	l=strlen(str);
	for(i=0;i<l;++i)
	{
		if(str[i]==' ')
		{
			continue;
		}
		if(isdigit(str[i]))
		{ 
			int x=str[i]-'0';
			push(x);
		}
		if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
		{
			cout<<str[i]<<" "<<"operator\n";
			m2=pop();
			m1=pop();
			switch(str[i])
			{
				case '+':m3=m1+m2;
					 break;
				case '-':m3=m1-m2;
					 break;
				case '*':m3=m1*m2;
					 break;
				case '/':m3=m1/m2;
					 break;
				default:continue;
			}
			push(m3);
		}
	}
}



void eval::display()
{
cout<<"The result of the postfix expression=";
cout<<a[top];
cout<<"\n";
}
main()
{
eval ob;
cout<<"______POSTFIX EVALUATION______\n";
ob.read();
ob.calc();
ob.display();
}
