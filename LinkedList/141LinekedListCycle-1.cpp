#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    explicit ListNode(int value) : val(value), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool isCycle = false;
        
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                return true;
            }
        }
    
        return false;
    }
};

int main(){
    Solution sol;
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next; // Creating a cycle

    bool hasCycle = sol.hasCycle(head);
    if(hasCycle){
        cout << "Cycle detected." << endl;
    }
    else{
        cout << "No cycle detected." << endl;
    }
    return 0;

}