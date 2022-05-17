

// GIVEN A SENTANCE FIND OUT THE NO. OF ALPHABET,DIGTS AND namespace

#include<bits/stdc++.h>
using namespace std;

int main(){

  //read the sentance and count wich is required

  char ch;
  ch = cin.get();

  int digits=0;
  int alphabet=0;
  int space=0;
  while(ch!='\n'){
    if(ch>='0' && ch<='9'){
      digits++;
    }

    else if(ch>='a' and ch<='z'  or ch>='A' and ch<='Z'){
      alphabet++;
    }

    else if(ch==' '){
      space ++;
    }

    ch = cin.get();
  }

  cout<<"no. of digits "<<digits<<endl;
  cout<<"no. of alphabet "<<alphabet<<endl;
  cout<<"no. of space "<<space<<endl;
  return 0;
}
