#include <stdio.h>
#include <stdlib.h>

int main()
{

    struct Node{
        int num;
        struct Node *next;
    };

    struct Node* head=NULL;
    struct Node* temp=NULL;
    struct Node* current=NULL;

    for(int i=0;i<5;i++){
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp=num-i;
        temp->next= NULL;
        if(head==NULL){
            head=temp;
            current=head;
        }
        else{
            current->next=temp;
            current=temp;
        }
    }
    current=head;
    while(current->next!=NULL){
        current=current->next;
    }
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->num=5;
    temp->next=NULL;
    current->next=temp;

    int pos;
    printf("Enter the position: ");
    scanf("%d",&pos);
    curent=head;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->num=5;
    temp->next=NULL;
    current->next=temp;
    for(int i=0;i<pos-2;i++){
        current=current->next;
    }

    current=head;
    for(int i=0;i<5;i++){
        printf("%d",current->num);
        current=current->next;
    }

    return 0;
}
