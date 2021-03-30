#include<iostream>

using namespace std;

class Queue
{
	private:
		int rear;
		int front;
		int arr[5];
		
	public:
		
		Queue()
		{
			front = rear = -1;
			for (int i = 0; i < 5; i++)
			{
				arr[i] = 0;
			}
		}
		
		bool isEmpty()
		{
			return (front == -1 && rear == -1);
		}
		
		bool isFull()
		{
			return (rear == 4);
		}
		
		void enqueue(int val)
		{
			if (isFull())
			{
				cout<<"Queue Full"<<endl;
				return;
			}
			
			if (isEmpty())
			{
				rear = front = 0;
			}
			else
			{
				rear++;
			}
			
			arr[rear] = val;
		}
		
		int dequeue()
		{
			int temp = 0;
			if (isEmpty())
			{
				cout<<"Queue Empty"<<endl;
				return 0;
			}
			
			temp = arr[front];
			
			if (rear == front)
			{
				rear = front = -1;
			}
			else
			{
				cout<<"front value: "<<front<<endl;
				arr[front] = 0;
				front++;
			}
			
			return temp;
		}
		
		int count()
		{
			return (rear - front) + 1;
		}
		
		void display()
		{
			cout<<"Queue items are"<<endl;
			
			for (int i = 0; i < 5; i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
};

int main()
{
	Queue q;
	int option, value;
	
		do
	{
		cout<<"Select an option (0 to exit)"<<endl;
		cout<<"1. Enque"<<endl;
		cout<<"2. Dequeue"<<endl;
		cout<<"3. is empty?"<<endl;
		cout<<"4. is full?"<<endl;
		cout<<"5. Count"<<endl;
		cout<<"6. Display"<<endl;
		cout<<"7. Clear Screen"<<endl;
		
		cin>>option;
		
		switch(option)
		{
			case 0:
				break;
				
			case 1:
				cout<<"Enter Value"<<endl;;
				cin>>value;
				q.enqueue(value);
				break;
			
			case 2:
				cout<<"Dequeue Value = "<<q.dequeue()<<endl;
				break;
			
			case 3:
				if (q.isEmpty())
				{
					cout<<"Empty"<<endl;
				}
				else 
				{
					cout<<"Not Empty"<<endl;
				}
				break;
				
			case 4:
				if (q.isFull())
				{
					cout<<"Full"<<endl;
				}
				else 
				{
					cout<<"Not Full"<<endl;
				}
				break;
				
			case 5:
				cout<<"Count = "<<q.count()<<endl;
				break;
				
			case 6:
				q.display();
				break;
				
			case 7:
				system("cls");
				break;
				
			default:
				cout<<"Select valid option"<<endl;
		}	
	}while(option != 0);
	
	return 0;
}
