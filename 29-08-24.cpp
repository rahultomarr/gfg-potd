class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(struct Node *head) {
        // Code here
    int ans=0;
        Node* slow=head;
        Node* fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                slow=slow->next;
                ans=1;
                while(slow!=fast){
                    slow=slow->next;
                    ans++;
                }
                break;
            }
        }
        return ans;
    }
};
