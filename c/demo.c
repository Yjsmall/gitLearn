#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
    int data;
    struct list *next;
}node,*list;

list create(list*,int n);
void showlist(list);

int main(int argc, char const *argv[]){
    list linklist;
    linklist = create(&linklist,5);
    showlist(linklist);
    return 0;
}

list create(list *head,int n){
    *head = (list)malloc(sizeof(node));
    /**
     * 头结点的重要性
     * 只有头指针，可能出现segmentation fault,access to main memory where u don't allow to access.野指针
     */
    (*head)->next = NULL;
    list p = *head;
    for (int i = 0; i < n; i++)
    {
        list new = (list)malloc(sizeof(node));
        new->data = i;
        new->next = NULL;
        p->next = new;
        p = p->next;
    }
    return *head;
}
void showlist(list head){
    list p = head->next;
    while (p != NULL)
    {
        printf("%d \t",p->data);
        p = p->next;
    }
    printf("\n");
}