#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = data;
    n->next = NULL;
    return n;
}

void insertAtBegining(struct Node** head, int data) {
    struct Node* n = createNode(data);
    n->next = *head;
    *head = n;
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* n = createNode(data);
    if (!*head) {
        *head = n;
        return;
    }
    struct Node* temp = *head;
    while (temp->next)
        temp = temp->next;
    temp->next = n;
}

void deleteNode(struct Node** head, int key) {
    struct Node* temp = *head, *prev = NULL;

    while (temp && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (!temp) {
        printf("Not found\n");
        return;
    }

    if (!prev)
        *head = temp->next;
    else
        prev->next = temp->next;

    free(temp);
}

void printList(struct Node* head) {
    for (; head; head = head->next)
        printf("%d->", head->data);
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int ch, val;

    while (1) {
        printf("\n1.insert beg 2.insert end 3.delete 4.display 5.exit\nChoice: ");
        scanf("%d", &ch);

        if (ch == 5)
            break;

        if (ch == 1 || ch == 2) {
            printf("Value: ");
            scanf("%d", &val);
            (ch == 1) ? insertAtBegining(&head, val) : insertAtEnd(&head, val);
        } else if (ch == 3) {
            printf("Delete value: ");
            scanf("%d", &val);
            deleteNode(&head, val);
        } else if (ch == 4) {
            printList(head);
        } else {
            printf("Invalid choice\n");
        }
    }
    return 0;
}
         
