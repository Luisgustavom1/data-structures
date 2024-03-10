#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node Node;

struct node {
	int value;
	Node *next;
};

extern void print(Node *head);
extern Node* init(int n);
extern Node* search(Node *head, int n);
extern void removeByValue(Node *head, int n);
extern Node* enqueue(Node *head, int n);
extern int dequeue(Node *head);

#endif
