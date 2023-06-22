#include<bits/stdc++.h>
using namespace std;

ListNode* deleteDuplicates(ListNode* head) {
    if(!head || !head->next)return head;
    ListNode*temp = head;
    while(temp && temp->next){
        if(temp->val == temp->next->Val){
            temp->next = temp->next->next;
        }else temp = temp->next;
    }   

    return head;
}

int main(){
    return 0;
}