/*
Along one side of a road there is a sequence of vacant plots of land.
Each plot has a diffrent area(non-zero).s0,the areas form a sequence a1,a2,..an.

You want to buy K acres of land to build a house . you want to find all segment
of continguous plots(i.e., a sbsection in the sequence) of whose sum is exactly
K.

Sample input
plots = [1 3 2 1 4 1 3 2 1 1 2]
k = 8

sample output
 2 5
 4 6
 5 9
*/

#include<iostream>
using namespace std;


//MY way
void housing(int *arr,int n, int k){

  int i=0,j=0;
  int  sum =0;
  while(j<=n){
    if(sum<k){
      sum = sum + arr[j];
      j++;
    }
    else if(sum > k){
      sum = sum - arr[i];
      i++;
    }
    else{
      cout<<i<<" "<<j-1<<endl;
      sum = sum + arr[j];
      j++;
    }
  }


}

void Housing(int *arr,int n,int k){
  int i=0;
  int j = 0;
  int cs = 0;

  while(j<n){

    //expand to right
    cs +=arr[j];
    j++;

    while(cs>k and i<j){
      cs = cs - arr[i];
      i++;
    }
    //check if any given point
    if(cs==k){
      //print that window
      cout<<i<<"-"<<j-1<<endl;
    }
  }
  return;
}

int main(){

int plots[] = {1,3,2,1,4,1,3,2,1,1};
int n = sizeof(plots)/sizeof(int);

int k = 8;
housing(plots,n,k);

return 0;
}
