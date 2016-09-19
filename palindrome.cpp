#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main(){
  cout << "Enter your string: ";
  char str[81];
  cin.getline(str, 81);
  char processedStr[81];
  int processedIndex = 0;
  char reversedStr[81]; //This will be the reverse of processedStr.

  //Must remove all punctuation. Also convert everything to lower case.
  for(int i=0; str[i]!= '\0'; i++){
    if(isalpha(str[i])){
      processedStr[processedIndex] = (char)tolower(str[i]);
      processedIndex++;
    }
  }
  //Add null character at the end. (Index already incremented.)
  processedStr[processedIndex] = '\0';

  //cout << processedStr << endl;

  //Now we shall reverse the processed string.
  for(int i=processedIndex - 1; i>= 0; i--){
    reversedStr[processedIndex-i-1] = processedStr[i];
  }
  reversedStr[processedIndex] = '\0';

  //cout << reversedStr << endl;

  //Compare the strings. (Test for palindrome.)
  if(strcmp(processedStr, reversedStr) == 0){
    cout << "Palindrome." << endl;
  }
  else{
    cout << "Not a palindrome." << endl;
  }
  
  return 0;
}
