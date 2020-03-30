// Author : Ashutosh Mishra

#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *left,*right;
	Node(int data){
		this->data=data;
		left=right=NULL;
	}
};
typedef struct Node* tptr;
int calcSize(tptr root){
	if(root==NULL)return 0;
	return calcSize(root->left)+calcSize(root->right)+1;
}
int main()
{
	tptr root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(5);
	cout<<calcSize(root);
	return 0;
}
