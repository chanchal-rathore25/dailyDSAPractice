#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    explicit ListNode(int value) : val(value), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        while(curr!= NULL) {
            next = curr->next ;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};

int main(){
    Solution sol;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    ListNode* res = sol.reverseList(head);
    if(res != NULL){
        cout << "Reversed list values: ";
        ListNode* temp = res;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    else{
        cout << "No nodes in the list." << endl;
    }

    return 0;

}