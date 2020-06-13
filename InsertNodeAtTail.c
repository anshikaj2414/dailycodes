SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *ptr,*tmp; 
    tmp = (SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode)); 
    tmp->data = data;

if(head==NULL){
    head=tmp;
    tmp->next = NULL;
    return head;
}
else{
    ptr=head;
    while(ptr->next!= NULL)
        ptr=ptr->next;
    ptr->next = tmp;
    tmp->next = NULL;
}

return head;
}
