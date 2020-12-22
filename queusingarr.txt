// CPP program to demonstrate working of STL stack 
#include <bits/stdc++.h> 
using namespace std; 

class myqueue
{
    int front,rear,size;
    public:
    int arr[10];
    myqueue()
    {
        front=-1;
        rear=-1;
    }
    bool enq(int data);
    int deq();
    int print_front();
    int print_rear();
    void display();
};

bool myqueue::enq(int data)
{
    if(rear<9)
    {   
        if(front==-1)
        front=0;
        rear++;
        arr[rear]=data;
        return true;
    }
    else
    {
        cout<<"overflow";
        return false;
    }
}

int myqueue::deq()
{
    int temp;
    if(front==-1||front>rear)
    {
        cout<<"underflow";
        return 0;
    }
    else
    {
        temp=arr[front];
        front++;
        return temp;
    }
    
}

int myqueue::print_rear()
{
    return arr[rear];
}

int myqueue::print_front()
{
    return arr[front];
}

void myqueue::display()
{
 for(int i=front;i<=rear;i++)
  {
      cout<< arr[i] <<"  ";
  }
    
}

int main () 
{ 
	myqueue myq;
	myq.enq(10);
	myq.enq(20);
	myq.enq(30);
	cout<<"rear element is: "<<myq.print_rear()<<endl;
	cout<<"front element is: "<<myq.print_front()<<endl;
	
	myq.display();
	
	int x=myq.deq();
	cout<<"deque the element ;"<<x<<endl;
	cout<<"front element is: "<<myq.print_front()<<endl;
	
	myq.display();
	

	return 0; 
} 
