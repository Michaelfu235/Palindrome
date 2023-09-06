//Author: Michael Fu

#include <iostream>
#include <cstring>
#include <ctype.h>


using namespace std;

int main(){
  char inputt[80];
  bool works = true;

  cin.getline(inputt, 80, '\n');

  
  for(int i = 0;inputt[i] != '\0';i++){
    inputt[i] = (char)tolower(inputt[i]); 
    if(!isalpha(inputt[i])){
	for(int j = i;inputt[j] != '\0';j++){
	  inputt[j] = inputt[j+1];
	}
	i = i-1;
      }
  }

  for(int i = 0;i<strlen(inputt)/2;i++){
    if(inputt[i] != inputt[strlen(inputt)-1-i]){
      works = false;
    }
  }

  if(works){
    cout << "This is a Palindrome" << endl;
  } else {
    cout << "This is not a palindrome" << endl;
  }
  
  
  return 0;
}
