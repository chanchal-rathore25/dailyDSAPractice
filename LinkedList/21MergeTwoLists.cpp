#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    explicit ListNode(int value) : val(value), next(nullptr) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL || list2 == NULL){
            return list1 == NULL ? list2 : list1;
        }

        if(list1->val<=list2->val){
            list1->next = mergeTwoLists(list1->next,list2);
            return list1;
        }else{
            list2->next = mergeTwoLists(list1,list2->next);
            return list2;
        }
    }
};

int main(){
    Solution sol;
    ListNode* head1 = new ListNode(2);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(4);
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(3);
    head2->next->next = new ListNode(4);
    

    ListNode* res = sol.mergeTwoLists(head1, head2);
    if(res != NULL){
        cout << "merge list : ";
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