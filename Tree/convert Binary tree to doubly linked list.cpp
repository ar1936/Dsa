In this video we discuss:
Inorder conversion of Binary Tree to Doubly Linked List.
A function that takes root of a Binary Tree and converts it into a Doubly linked list.
Hint:- we need to do the inorder traversal of the Tree and while doing inorder traversal we can simply maintain a previous pointer or reference of the previously traversed node. And change right child of the previous node to current node and left child of current node as previous.


#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->key<<" ";
        curr=curr->right;
    }cout<<endl;
}



Node *BTToDLL(Node *root){
    if(root==NULL)return root;
    static Node* prev = NULL;
    Node *head=BTToDLL(root->left);
    if(prev==NULL){head=root;}
    else{
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    BTToDLL(root->right);
    return head;
}  

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(20);
	root->right->left=new Node(30);
	root->right->right=new Node(35);
	
	Node *head=BTToDLL(root);
	printlist(head);
}