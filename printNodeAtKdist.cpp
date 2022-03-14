#include<bits/stdc++.h>
using namespace std;

struct node{
    int key;
    struct node* left;
    struct node* right;
    node(int val)
    {
        key=val;
        left=right=NULL;
    }
};

void printKDist(node * root,int k)
{
    if(root==NULL)
        return;
    if(k==0)
        cout<<root->key<<" ";
    else{
        printKDist(root->left,k-1);
        printKDist(root->right,k-1);
    }
}



int main() {
	
	node *root=new node(10);
	root->left=new node(20);
	root->right=new node(30);
	root->left->left=new node(40);
	root->left->right=new node(50);
	root->right->right=new node(70);
	root->right->right->right=new node(80);
	int k=2;
	
	printKDist(root,k);
}