class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        
        if(head == nullptr){
            return true;
        }
        
        Node* pro = head->next;
        Node* noob = head;
        
        while(pro != nullptr){
            
            if(pro == noob){
                return true;
            }
            pro = pro->next;
            if(pro != nullptr){
                pro = pro->next;
            }
            noob = noob->next;
        }
        return false;
        
    }
};

