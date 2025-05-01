class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        
        // int ans=0;
        
        if(head == nullptr){
            return 0;
        }
        if(head->next == nullptr){
            return head->data;
        }
        if(head->next->next==nullptr){
            return head->next->data;
        }
        
        Node* pro = head->next;
        Node* noob = head;
        
        while(pro!=nullptr){
            pro = pro->next;
            if(pro!=nullptr){
                pro=pro->next;
            }
            noob = noob->next;
            
        }
        return noob->data;
        
    }
};
