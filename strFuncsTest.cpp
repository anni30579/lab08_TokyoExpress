#include "tddFuncs.h"
#include "strFuncs.h"

int main() {
  string lol = "lol";
  string notpaly = "notapalindrome";
  string five = "fivevif";
  string even = "wallaw";
  string panama = "amanaplanacanalpanama";
  assertTrue(isPalindrome(lol), "lol");
  assertFalse(isPalindrome(notpaly), "notapalindrome");
  assertTrue(isPalindrome(five), "fivevif");
  assertTrue(isPalindrome(even), "wallaw");
  assertTrue(isPalindrome(panama), "amanaplanacanalpanama");

  return 0;
}
