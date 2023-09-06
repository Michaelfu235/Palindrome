//Author: Michael Fu
//date: 9/22/2023
//about: This program checks if the inputted cstring is a palindrome or not. 

#include <iostream>
#include <cstring>
#include <ctype.h>


using namespace std;

int main(){
  //create an input cstring
  char inputt[80];
  bool works = true;
  
  //take in input and put it into the cstring
  cin.getline(inputt, 80, '\n');

  //iterate through the input, and make the character lowercase. Then, if the character is not a character of the alphabet or a number, iterate through the remaining parts of the input string and shift them all forward 1, essentially deleting the non alphanumeric character. Then shift i back one because of the characters being deleted which changes the indexing.  
  for(int i = 0;inputt[i] != '\0';i++){
    inputt[i] = (char)tolower(inputt[i]); 
    if(!isalpha(inputt[i]) && !isdigit(inputt[i])){
	for(int j = i;inputt[j] != '\0';j++){
	  inputt[j] = inputt[j+1];
	}
	i = i-1;
      }
  }
  

  //loop through the first half of the string and if the character at i does not equal the corresonding character at strlen(inputt)-i-1, set the boolean works to false. 
  for(int i = 0;i<strlen(inputt)/2;i++){
    if(inputt[i] != inputt[strlen(inputt)-1-i]){
      works = false;
    }
  }

  //if works is true, as in the previous for loop didn't catch any non-corresponding characteres, the print it is a palindrome. otheriwse, print that it's not a palindrome. 
  if(works){
    cout << "This is a Palindrome" << endl;
  } else {
    cout << "This is not a palindrome" << endl;
  }
  
  
  return 0;
}
