class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
        
    int count=0;

Node* temp=head;

while(head){

count++;

head=head->next;

}

int ans=count/2;

while(ans--){

temp=temp->next;

}

return temp->data;

}
};
