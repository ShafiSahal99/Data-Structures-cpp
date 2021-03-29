#include<iostream>
#include<string>

using namespace std;

class Stack 
{
	private:
		int top;
		int arr[5];
		
	public:
		Stack()
		{
			top = -1;
			for (int i = 0; i < 5; i++)
			{
				arr[i] = 0;
			}
		}
		
		bool isEmpty()
		{
			return (top == -1);
		}
		
		bool isFull()
		{
			return (top == 4);
		}
		
		void push(int val)
		{
			if (isFull())
			{
				cout<<"Stack Overflow"<<endl;
			}
			else
			{
				top++;
				arr[top] = val;
			}
		}
		
		int pop()
		{
			if (isEmpty())
			{
				cout<<"Stack Underflow"<<endl;
				return 0;
			}
			else
			{
				int popValue = arr[top];
				arr[top] = 0;
				top--;
				return popValue;
			}
		}
		
		int count()
		{
			return top + 1;
		}
		
		int peek(int pos)
		{
			if (isEmpty())
			{
				cout<<"Stack Underflow"<<endl;
				return 0;
			}
			else
			{
				return arr[pos];
			}
		}
		
		void change(int pos, int val)
		{
			arr[pos] = val;
			cout<<"Value changed at position"<<pos<<endl;
		}
		
		void display()
		{
			cout<<"All stack values are"<<endl;
			
			for(int i = 4; i >= 0; i--)
			{
				cout<<arr[i]<<endl;
			}
		}
};

int main()
{
	Stack s1;
	int position, value, option;
	
	do
	{
		cout<<"Selec an option (0 to exit)"<<endl;
		cout<<"1. Push"<<endl;
		cout<<"2. Pop"<<endl;
		cout<<"3. is empty?"<<endl;
		cout<<"4. is full?"<<endl;
		cout<<"5. Peek"<<endl;
		cout<<"6. Count"<<endl;
		cout<<"7. Change"<<endl;
		cout<<"8. Display"<<endl;
		cout<<"9. Clear Screen"<<endl;
		
		cin>>option;
		
		switch(option)
		{
			case 0:
				break;
				
			case 1:
				cout<<"Enter Value"<<endl;;
				cin>>value;
				s1.push(value);
				break;
			
			case 2:
				cout<<"Popped Value = "<<s1.pop()<<endl;
				break;
			
			case 3:
				if (s1.isEmpty())
				{
					cout<<"Empty"<<endl;
				}
				else 
				{
					cout<<"Not Empty"<<endl;
				}
				break;
				
			case 4:
				if (s1.isFull())
				{
					cout<<"Full"<<endl;
				}
				else 
				{
					cout<<"Not Full"<<endl;
				}
				break;
				
			case 5:
				cout<<"Enter Position"<<endl;
				cin>>position;
				cout<<"Value at position "<<position<<" = "<<s1.peek(position);
				break;
				
			case 6:
				cout<<"Count = "<<s1.count()<<endl;
				break;
				
			case 7:
				cout<<"Enter Position"<<endl;
				cin>>position;
				cout<<"Enter Value"<<endl;
				cin>>value;
				s1.change(position, value);
				break;
				
			case 8:
				s1.display();
				break;
			
			case 9:
				system("cls");
				break;
				
			default:
				cout<<"Select valid option"<<endl;
		}	
	}while(option != 0);

	
	return 0;
}
