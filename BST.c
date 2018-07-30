//CSE-16-126
//Binary Trees
#include<stdio.h>
struct node
{
	int value;
	struct node* left;
	struct node* right;
};


struct node* newNode(int data)
{
  
  struct node* node = (struct node*)malloc(sizeof(struct node));
 
  
  node->value = data;
 
  
  node->left = NULL;
  node->right = NULL;
  return(node);
}

void inOrder(struct node* root){
	if(root == NULL){
		return;
	}else{
		inOrder(root->left);
		printf("%d \n", root->value);
		inOrder(root->right);
	}
}

void preOrder(struct node* root){
	if(root == NULL){
		return;
	}else{
		printf("%d \n", root->value);
		preOrder(root->left);
		preOrder(root->right);
	}
}

void postOrder(struct node* root){
	if(root == NULL){
		return;
	}else{
		postOrder(root->left);
		postOrder(root->right);
		printf("%d \n", root->value);
	}
}

void search(struct node* root, int item)
{
	struct node* trav;
	trav = root;
	while(trav != NULL){
		if(item == trav->value){
			printf("Found\n");
			return;
		}else if(item < trav->value){
			trav = trav->left;
		}else if(item > trav->value){
			trav = trav->right;
		}
	}
	printf("Not Found\n");
}
int main()
{
	struct node *root = newNode(10);
	root->left        = newNode(5);
    root->right       = newNode(20);
    root->left->left = newNode(3);
    root->left->right = newNode(7);
    root->left->right->left = newNode(6);
    root->right->left = newNode(15);
    root->right->right = newNode(25);
    inOrder(root);
    preOrder(root);
    postOrder(root);
    search(root, 6);
}
