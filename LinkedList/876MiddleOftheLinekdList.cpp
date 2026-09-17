#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    explicit ListNode(int value) : val(value), next(nullptr) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast -> next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
    return slow;
    }
};

int main(){
    Solution sol;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    ListNode* res = sol.middleNode(head);
    if(res != NULL){
        cout << "Middle node value: " << res->val << endl;
    }
    else{
        cout << "No middle node found." << endl;
    }

    return 0;

}