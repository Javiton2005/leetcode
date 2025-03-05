#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
  
  struct ListNode *l3 = malloc(sizeof(struct ListNode));

  return (l3);

}

int main(){
  
  struct ListNode *l1 = malloc(sizeof(struct ListNode));
  struct ListNode *l2 = malloc(sizeof(struct ListNode));

  struct ListNode *l12 = malloc(sizeof(struct ListNode));
  struct ListNode *l22 = malloc(sizeof(struct ListNode));

  struct ListNode *l13 = malloc(sizeof(struct ListNode));
  struct ListNode *l23 = malloc(sizeof(struct ListNode));
  
  l1->next = l12;
  l1->val = 2;
  
  l12->next = l13;
  l12->val = 3;
  
  l13->next = NULL;
  l13->val = 4;

  l2->next = l22;
  l2->val = 1;

  l22->next = l23;
  l22->val = 2;

  l23->next = NULL;
  l23->val = 3;

  struct ListNode *l3 = addTwoNumbers(l1, l2);

  return 1;
}
