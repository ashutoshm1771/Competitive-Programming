#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	struct Node *left,*right;
	Node(int data)
	{
		this->data=data;
		left=right=NULL;
	}
};
typedef struct Node* tptr;

tptr bstInsert(tptr root,int data)
{
	if(root==NULL)return new Node(data);
	else{
		if(data < root->data ) root->left=bstInsert(root->left,data);
		else if(data > root->data ) root->right=bstInsert(root->right,data);
		else return root;
	}
}
void inorder(tptr root)
{
	if(root==NULL)return;
	inorder(root->left );
	cout<<root->data<<" ";
	inorder(root->right );
}
void mirror(tptr root)
{
	if(root==NULL)return;
	else{
		tptr temp;
		mirror(root->left);
		mirror(root->right);
		temp=root->left;
		root->left=root->right;
		root->right=temp;
	}
}
int main()
{
	int n;
	cin>>n;
	tptr root=NULL;
	while(n!=-1)
	{
		root=bstInsert(root,n);
		cin>>n;
	}
//	tptr root = new Node(1); 
//    root->left = new Node(2); 
//    root->right = new Node(3); 
//    root->left->left = new Node(4); 
//    root->left->right = new Node(5);
	inorder(root);
	puts("");
	tptr root1=root;
	mirror(root);
	inorder(root);
	return 0;
}
