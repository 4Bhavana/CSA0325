#include<stdio.h>
#define max 10
void display(int a[], int n) {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int insert(int a[],int n,int position,int element,int capacity)
{
	if(n>=capacity)
	{
		printf("full\n");
		return n;
	}
	if(position<0||position>n)
	{
		printf("empty\n");
		return n;
	}
	for(int i=n-1;i>=position;i--)
	{
		a[i+1]=a[i];
	}
	a[position]=element;
	return n+1;
}
int delet(int a[],int n,int position)
{
	if(n<=0)
	{
		printf("full\n");
		return n;
	}
	if(position<0||position>=n)
	{
		printf("empty\n");
		return n;
	}
	for(int i=position;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	return n-1;
}
int main()
{
	int a[max];
	int capacity=max;
	int n=0;
	int element,position,choice;
	do
	{
		printf("\n1.display\n3.delete\n2. insert\n4.exit\n");
		printf("enter choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				display(a,n);
				break;
			case 2:
				printf("enter the element\n");
				scanf("%d",&element);
				printf("enter position");
				scanf("%d",&position);
				n=insert(a,n,position,element,capacity);
				break;
			case 3:
				printf("enter posiion");
				scanf("%d",&position);
				n=delet(a,position,n);
				break;
			case 4:
				printf("exit\n");
			default:
				printf("invalid\n");
		}
	}
	while(choice!=4);
	printf("exit\n");
}

