#include<bits/stdc++.h>
using namespace std;

// recursive way
ListNode* reverseList(ListNode* head) {
    if(!head || !head->next)return head;
    ListNode*nh = reverseList(head->next);
    ListNode*nxt = head->next;
    nxt->next = head;
    head->next = NULL;
    return nh;
}

// iterative way of doing this
ListNode* reverseList(ListNode* head) {
    if(!head || !head->next)return head;
    ListNode*prev = NULL;
    ListNode*curr = head;
    ListNode*nxt = head->next;

    while (nxt)
    {
        curr->next = prev;
        prev = curr;
        curr = nxt;
        nxt = nxt->next;
    }

    curr->next =prev;
    return curr;
}

int main(){
    return 0;
}