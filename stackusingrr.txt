/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class stack1
{   
     int top;
    
    public:
    int arr[10];
    stack1()
    {top = -1;}
    bool push(int n);
    int pop();
    int top_ele();
    bool isEmpty();
    int printtop();
};

bool stack1::push(int n)
{
    if(top<10)
    {
    top++;
    cout<<top;
    arr[top]=n;
    return true;
    }
    else
    {
        cout<<"overflow";
        return false;
    }
}

 int stack1::pop()
{
    int temp;
    if(top>-1)
    {  
        temp=arr[top];
        top--;
       // cout<<"pop"<<top;
        return temp;
    }
    else
    {
        cout<<"underflow";
        return 0;
    };
}

int stack1::top_ele()
{
    
   if(top!=-1)
    {
        return arr[top];
    }
    else
    {
        cout<<"underflow";
        return 0;
    };
}

bool stack1::isEmpty()
{
    return (top<0);
}

int stack1::printtop()
{
    cout<<"top val is"<<top;
    
}

int main()
{
    stack1 s;
   // cout<<s.printtop()<<endl;
    s.push(190);
    s.push(10);
    s.push(8);
   // int t=s.top_ele();
    int x;
    //cout<<"top element is: "<< t<<endl;
    //print the stack
    s.printtop();
    cout<<endl;
    while(!s.isEmpty())
    {  
        cout<<s.pop()<<" ";
    }
    s.printtop();
    return 0;
}
