// CPP program to demonstrate working of STL stack 
#include <bits/stdc++.h> 
using namespace std; 

struct tnode{
    public:
    int data;
   tnode* left;
   tnode* right;
   tnode(int x){
       data=x;
       left=NULL;
       right=NULL;
   }
   
   //inorder
   tnode* display(tnode* hroot)
   {
       if(hroot==NULL)
       return NULL;

       
       //INORDER
     /*  display(hroot->left);
       cout<<hroot->data<<"  ";
       display(hroot->right);
       */
       
       //PREORDER
       /*cout<<hroot->data<<"  ";
       display(hroot->left);
       display(hroot->right);*/
       
       //POSTORDER
       display(hroot->left);
       display(hroot->right);
              cout<<hroot->data<<"  ";
   }
};


   


int main () 
{ 
	tnode* root=new tnode(10);
	root->left=new tnode(11);
	root->left->left=new tnode(122);
	root->right=new tnode(234);
	root->display(root);
	
	

	return 0; 
} 
