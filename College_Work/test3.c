#include<stdio.h>
#include<stdlib.h>
#define size 5;
struct demo{
	int a;
struct demo *q;
};
int main()
{ 
	struct demo *head=NULL;
	//struct demo *first=NULL;
	struct demo *second=NULL;
	struct demo *third=NULL;
	head=(struct demo*)malloc(sizeof(struct demo));
	second=(struct demo*)malloc(sizeof(struct demo)); 
	third=(struct demo*)malloc(sizeof(struct demo));  
	struct demo* n;
	n=head;
	while(n!=NULL)
	{
		printf(" %d ",n->a);
		n=n->q;
	}
	int s=sizeof(head);
	printf("\n%d",s);
}