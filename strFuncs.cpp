#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
  // Precondition: Two valid strings s1 and s2, each containing a mix of alpha bets, spaces, and punctuations
  // Postcondition: Return true if one string is an anagram of the other.
  string sorted1, sorted2;
  
  return true;
}

bool isPalindrome(const string s1){
  // Precondition: Proper string is inputted
  // Postcondition: Outputs true if the string is a palindrome, false otherwise
  if (s1.length() == 1)
    return true;
  else if (s1.length() == 2) {
    if (s1[0] == s1[1]) return true;
    else return false;
  }
  else if (s1[0] == s1[s1.length() - 1]) {
    return isPalindrome(s1.substr(1, s1.length() - 2));
  }
  else
    return false;
}


