class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // Your code here
    if(x==1){
            if(head->next){
                head->next->prev = NULL;
                head = head->next;
                return head;
            }
            return NULL;
        }
        int count = x;
        Node* temp = head;
        while(--count){
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        if(temp->next){
            temp->next->prev = temp->prev;
        }
        delete(temp);
        return head;
    }
};
