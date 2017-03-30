/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    Node* prev;
    Node* prox;
    prev = head;
    prox = head;
    // Complete this function
    // Do not write the main method
    if(head==NULL){
        return 0;
    }
    else{
  
    while(prox!=NULL && prox->next!= NULL){
        prev=prev->next;
        prox=prox->next->next;
        if(prox==prev){
            return 1;
            }
        }
   return 0;

    }
    
}
