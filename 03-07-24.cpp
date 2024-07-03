class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
      Node *dummy=new Node(-1);
        dummy->data=-1;
        dummy->next=head;
        Node *prev=dummy;
        Node *curr=head;
        while(curr!=NULL&&curr->next!=NULL)
        {
            bool dup = false;
            while(curr->next!=NULL&&curr->data==curr->next->data){
                dup=true;
                curr->next=curr->next->next;
            }
            
            if(dup){
                prev->next=curr->next;
                curr=prev->next;
            }
            else{
                if(curr!=NULL)
                    curr=curr->next;
                prev=prev->next;
            }
        }
        head=dummy->next;
        return head;
    }
};
