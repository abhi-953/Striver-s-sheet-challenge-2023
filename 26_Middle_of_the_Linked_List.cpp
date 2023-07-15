Node *findMiddle(Node *head) {
    // Write your code here
    Node* middle=head;
    while(head!=NULL && head->next!=NULL && head->next->next!=NULL){
        middle=middle->next;
        head=head->next->next;
    }
    if(head!=NULL && head->next!=NULL){
        middle=middle->next;
    }
    return middle;

}
