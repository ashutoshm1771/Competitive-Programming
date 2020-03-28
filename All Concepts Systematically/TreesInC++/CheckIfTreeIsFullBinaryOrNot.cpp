#include<iostream>
#include<cstdlib>
#include<cmath>
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
typedef struct Node *tptr;
tptr bstInsert(tptr root,int data)
{
	if(root==NULL) return new Node(data);
	else{
		if(data < root->data) root->left=bstInsert(root->left,data);
		else if(data > root->data )root->right=bstInsert(root->right,data);
		else return root;
	}
}
int countNodes(tptr root)
{
	if(root==NULL)return 0;
	else return 1+countNodes(root->left)+countNodes(root->right );
}
int height(tptr root)
{
	if(root==NULL)return 0;
	int h1=height(root->left);
	int h2=height(root->right);
	return max(h1,h2)+1;
}
bool isFullBinary(tptr root)
{
	int c=countNodes(root);
	int h=height(root);
	if(c==((int)pow(2,h))-1)return true;
	else return false;
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
	cout<<countNodes(root)<<endl;
	cout<<height(root)<<endl;
	if(isFullBinary(root))cout<<"Full Binary";
	else puts("Not Full Binary");
}
