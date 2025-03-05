#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node*)malloc(sizeof(struct node))

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
	struct node *t1,*t2,*t3;
	t1=(struct node*)malloc(sizeof(struct node));
	t1->data=item;
	t1->left=NULL;
	t1->right=NULL;
	if(root==NULL)
	{
		root=t1;
	}
	else
	{
		t2=root;
		while(t2!=NULL)
		{
			t3=t2;
			if(item<t2->data)
			{
				t2=t2->left;
			}
			else
			{
				t2=t2->right;
			}
		}
		if(item<t3->data)
		{
			t3->left=t1;
		}
		else
		{
			t3->right=t1;
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
	int n,item;

	init();

	printf("How many number : ");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		printf("Enter the data : ");
		scanf("%d",&item);
		bst(item);
	}

	inorder(root);
	return 0;
}