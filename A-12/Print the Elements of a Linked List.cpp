void printLinkedList(SinglyLinkedListNode* head) 
{
    int data;
    while(head!=NULL)
{
cout<<head->data<<endl;
head=head->next;
}
}
