#include "linkedList.h"
#include "linkedListFuncs.h"


int recursiveSum(Node* head) {
  // Precondition: Proper node is inputted
  // Postcondition: Recursively calculated sum of node values is outputted
  if (head->next == NULL) return head->data;
  return head->data + recursiveSum(head->next);
}

//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {
  // Precondition: Proper node is inputted
  // Postcondition: Recursively calculated max value of node is outputted
  if (head->next == NULL) return head->data;	
  else if (head->data > recursiveLargestValue(head->next)) return head->data;
  else return recursiveLargestValue(head->next);
}
