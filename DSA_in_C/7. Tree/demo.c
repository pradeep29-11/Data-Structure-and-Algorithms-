#include<stdio.h>
#include<stdlib.h>

#define NEWNODE (struct node *)malloc(sizeof(struct node));

struct node 
{
	struct node *left;
	int data;
	struct node *right;
};
struct node *root;

void init()
{
	root=NULL;
}
void bst(int item)
{
	struct node *t1,*t2,*t;

	t=NEWNODE;
	t->data=item;
	t->left=NULL;
	t->right=NULL;

	if(root==NULL)
	{
		root=t;
	}
	else 
	{
		t1=root;
		while(t1!=NULL)
		{
			t2=t1;
			if(item<t1->data)
			{
				t1=t1->left;
			}
			else 
			{
				t1=t1->right;
			}
		}
		if(item<t2->data)
		{
			t2->left=t;
		}
		else 
		{
			t2->right=t;
		}
	}
}
void inorder(struct node *t)
{
	if(t!=NULL)
	{
		inorder(t->left);
		printf("%d ",t->data);
		inorder(t->right);
	}
}
int main()
{
	int n,data;

	printf("How many Item : ");
	scanf("%d",&n);

	init();

	for(int i=0;i<n;i++)
	{
		printf("Enter the data : ");
		scanf("%d",&data);

		bst(data);
	}
	inorder(root);

	return 0;
}