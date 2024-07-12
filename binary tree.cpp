#include<iostream>
using namespace std;
//declare the structure for tree
struct Node{
	int data;
	Node * left;
	Node * right;
};

//function to create a new node

Node * createNode(int value){
	Node* newNode = newNode;
	newNode->data =  value;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

//insert the node into the binary tree
Node* insert(Node* root, int value){
	if(root==NULL){
		return createNode(value);
	}
	if(value<root->data){
		root->left=insert(root->left,value);
	}
	else{
		root->right=insert(root->right,value);
	}
	return root;
}
// pre order traversing
void preorderTraversing(Node* root)
{
	if(root==NULL){
		return;
	}
	//traversing the Node
	cout<<root->data<<" ";
	
	//traversing the left child
	preorderTraversing(root->left);
	//traverse the right children
	preorderTraversing(root->right);
}
int main(){
	Node* root = NULL;
	int number, values;
	cout<<" enter the number of Nodes";
	cin>>number;
	cout<<"enter the values for the binary tree nodes: \n";
	for(int i=0; i<number; i++){
		cin>>values;
		root=insert(root, values);
	}
	//perform preorder Traversing
	cout<<"Pre-order Traversing :";
	preorderTraversing(root);
	
	return 0;
}
