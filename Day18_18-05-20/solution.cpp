#include <bits/stdc++.h>

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
  	
  	void preOrder(Node *root) {
		
      	if( root == NULL )
          	return;
      
      	std::cout << root->data << " ";
      	
      	preOrder(root->left);
      	preOrder(root->right);
    }

/*
Node is defined as 

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

    Node * insert(Node * root, int data) {
        Node* temp=new Node(data);
        Node* point=root;
        
        if(root==NULL)
        return temp;
        while(true)
        {
            if(point->data>data)
            {if(point->left==NULL)
            {
                point->left=temp;
                break;
            }
            else
            point=point->left;
            }
            else if(point->data<data)
            { if(point->right==NULL)
            {
                point->right=temp;
                break;
            }
            else
            point=point->right;
            }
        }
        return root;
    }

};
