#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;
NODE *c()
{//ͷ�巨
    NODE *head = (NODE *)malloc(sizeof(NODE*));
    head->next = NULL;

    int x;
    scanf("%d",&x);

    while (x != 0) {
        NODE *p = (NODE *)malloc(sizeof(NODE*));
        p->data =x;

        p->next = head->next;
        head->next = p;

        scanf("%d",&x);
    }

    return head;
}
NODE *c1()
{//β�巨
  NODE *head = (NODE *)malloc(sizeof(NODE));
    head->next = NULL;
    NODE *end = head;
    int x;
    scanf("%d",&x);
    while (x!= 0) 
	{ // ������0ʱ����ʾ��������������ϡ�
        NODE *p = (NODE *)malloc(sizeof(NODE));
        p->data =x;
        end->next = p;
        end = p;
        scanf("%d",&x);
    }
    end->next = NULL;
    return head;
}
void print(NODE *head)
{
    if (head == NULL) return;

    NODE *p = head->next;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}



int main(int argc, const char * argv[]) 
{
	int choice;//0Ϊͷ�巨��1Ϊβ�巨
	scanf("%d",&choice);
	if(choice==0)
	{
    NODE *head = c(); 
    print(head);
	}
	else 
	{
		NODE *head=c1();
		print(head);
	}
    return 0;
}