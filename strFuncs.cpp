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
  string sorted1 = "";
  string sorted2 = "";
  // the processing plant
  for (int i = s1.length() - 1; i >= 0; i--) {
    if(!isalpha(s1[i])) s1.erase(i,1);
    else s1[i] = tolower(s1[i]);
    if(!isalpha(s2[i])) s2.erase(i,1);
    else s2[i] = tolower(s2[i]);
  }
  // creating alphabetical strings
  for (int j = 'a'; j <= 'z'; j++) {
    while ((int)s1.find(j) != -1) {
      sorted1 += j;
      s1.erase((int)s1.find(j),1);
    }
    while ((int)s2.find(j) != -1) {
      sorted2 += j;
      s2.erase((int)s2.find(j),1);
    }
  }
  if(sorted1 == sorted2) return true;
  else return false;
}

bool isPalindrome(const string s1){
  // Precondition: Proper string is inputted
  // Postcondition: Outputs true if the string is a palindrome, false otherwise
  if (s1.length() == 1)
    return true;
  else if (s1.length() == 2) {
    if (tolower(s1[0]) == tolower(s1[1])) return true;
    else return false;
  }
  else if (tolower(s1[0]) == tolower(s1[s1.length() - 1])) {
    return isPalindrome(s1.substr(1, s1.length() - 2));
  }
  else
    return false;
}


