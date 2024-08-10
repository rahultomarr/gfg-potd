class Solution {
  public:
    // Function to rotate a linked list.
    Node* rotate(Node* head, int k) {
        // Your code here
    Node* end = head;
        int cnt =0;
        while(end->next != nullptr){
            cnt++;
            end =end->next;
        }
        cnt++;
        if(cnt == k){
            return head;
        }
        Node* start =head;
        k--;
        while(k--){
            start=start->next;
        }
        Node* newstart = start->next;
        start->next =nullptr;
        end->next = head;
        
        return newstart;
    }
};
