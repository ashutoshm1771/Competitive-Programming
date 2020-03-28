#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	struct Node* left,*right;
};
typedef struct Node* tptr;
tptr newNode(int data)
{
	tptr node=(struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->left = node->right = NULL;
	return node;
}
void inorder(tptr root)
{
	if(root==NULL)return;
	inorder(root->left );
	cout<<root->data<<" ";
	inorder(root->right );
}
int maxDepth(tptr root)
{
	if(root==NULL)return 0;
	else{
		int lDepth=maxDepth(root->left);
		int rDepth=maxDepth(root->right);
		return max(lDepth+1,rDepth+1);
	}
}
tptr bstInsert(tptr root,int data)
{
	if(root==NULL) return newNode(data);
	else{
		if(data < root->data ) 
			root->left = bstInsert(root->left , data);
		else if(data > root->data )
			root->right = bstInsert(root->right , data);
		else return root;
	}
}
int main()
{
	tptr root=NULL;
	int n;
	cin>>n;
	while(n!=-1)
	{
		root=bstInsert(root,n);
		cin>>n;
	}
	inorder(root); puts("");
	cout<<maxDepth(root);
	return 0;
}
