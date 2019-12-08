#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/


void topView(Node * root) { 
        
        if (!root)  return;

        map<Node*, int> hd;
        map<int, int> m;
        deque<Node*> q;
        q.push_back(root);

        hd[root]=0;
        m[hd[root]]=root->data;
        while(!q.empty())
        {
            if (root->left)
            {
                hd[root->left] = hd[root]-1;
                if (!m[hd[root->left]]) m[hd[root->left]] = root->left->data;
                q.push_back(root->left);
            }
            if (root->right)
            {
                hd[root->right] = hd[root]+1;
                if (!m[hd[root->right]]) m[hd[root->right]] = root->right->data;
                q.push_back(root->right);            
            }
            q.pop_front();
            if (q.size())   root = q.front();
        }
        map<int, int>::iterator it = m.begin();

        while(it!=m.end())
        {
            cout << it->second << " ";
            it++;
        }
    }

}; //End of Solution

int main() {
    
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    myTree.topView(root);

    return 0;
}

