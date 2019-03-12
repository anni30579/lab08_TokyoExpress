#include "tddFuncs.h"
#include "strFuncs.h"
#include "recLinkedListFuncs.h"
#include <iostream>

int main() {
  string lol = "lol";
  string notpaly = "notapalindrome";
  string five = "fivevif";
  string even = "wallaw";
  string panama = "amanaplanacanalpanama";
  string llo = "llo";
  string anagram = "fvvifie";
  string another = "ee";
  string lol2 = "lololololol";
  assertTrue(isPalindrome(lol), "lol");
  assertEquals(isPalindrome(notpaly), 0, "notapalindrome");
  assertTrue(isPalindrome(five), "fivevif");
  assertTrue(isPalindrome(even), "wallaw");
  assertTrue(isPalindrome(panama), "amanaplanacanalpanama");
  assertTrue(isPalindrome(another), "ee");
  assertTrue(isPalindrome(lol2), "lololololol");
  
  assertTrue(isAnagram(lol, llo), "lol vs llo");
  assertTrue(isAnagram(five, anagram), "fivevif vs fvvifie");
  assertEquals(isAnagram(five, even), 0, "fivevif vs wallaw");

  LinkedList list1;
  Node* temp = new Node;
  Node* temp2 = new Node;
  Node* temp3 = new Node;
  Node* temp4 = new Node;
  temp->data = 3;
  temp2->data = 11;
  temp3->data = 5;
  temp4->data = 67;
  list1.head = temp;
  list1.tail = temp2;
  list1.head->next = temp3;
  list1.head->next->next = temp4;
  list1.head->next->next->next = list1.tail;

  assertEquals(recursiveSum(list1.head), 86, "list1");
  assertEquals(recursiveLargestValue(list1.head), 67, "list1");
 
  return 0;
}
