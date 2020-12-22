// CPP program to demonstrate working of STL stack 
#include <bits/stdc++.h> 
using namespace std; 

class n_node{
    public:
    int data;
    n_node* next;
};

class myqueue
{
    public:
    n_node* front=NULL;
    n_node* rear=NULL;
    n_node* next;
    n_node* prev;
    n_node* new_node;
    int data;
    void enq(int d)
    {
       new_node=new n_node();
        new_node->data=d;
        new_node->next=NULL;
        if(front==NULL and rear==NULL)
        {
            front=new_node;
            rear=new_node;
        }
        else
        {   
            prev=rear;
            rear->next=new_node;
            rear=new_node;
        }
        cout<<"enque data: "<<rear->data<<endl;
    }
    void display()
    {
         n_node* t=front;
       while(t!=NULL)
  {
      cout<< t->data <<"  ";
      t=t->next;
  }
        
    }
    
    void deq()
    {
        n_node *temp=front;
        cout<< "dequeu  "<<temp->data<<endl;
        front=front->next;
    }
};
   


int main () 
{ 
	myqueue myq;
	myq.enq(10);
	myq.enq(20);
	myq.enq(30);
//	cout<<"rear element is: "<<myq.print_rear()<<endl;
//	cout<<"front element is: "<<myq.print_front()<<endl;
	myq.display();
	myq.deq();
	
	myq.display();
	

	return 0; 
} 
