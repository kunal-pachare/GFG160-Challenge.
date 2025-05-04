class Solution {
  public:
    Node* reverseList(struct Node* head) {
        
       if(head == nullptr || head->next == nullptr){
           return head;
       }
       
       Node* curr = head;
       Node* forward = nullptr;
       Node* prev = nullptr;
       
       while(curr != nullptr){
           forward = curr->next;
           curr->next = prev;
           prev = curr;
           curr = forward;
       }
       return prev;
      
    }
};

