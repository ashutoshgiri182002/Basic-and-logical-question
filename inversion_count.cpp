
/*
Given an array counting integers, you need to count the total number
of inversions.

Inversion --> Two elements a[i] and a[j] form an inversion if a[i]>a[j]
and i<j

Sample Input

[0,5,2,3,1]

output
5

*/


#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int>&arr,int s,int e){

   int i = s;
   int m = (s+e)/2;
   int j = m+1;

   vector<int>temp;
int cnt = 0;

   while(i<=m and j<=e){
     if(arr[i] < arr[j]){
       temp.push_back(arr[i]);
       i++;
     }
     else{
       cnt +=(m-i+1);
       temp.push_back(arr[j]);
       j++;
     }
   }

//copy rem elements from first array
   while(i<=m){
     temp.push_back(arr[i++]);
   }

   //or copy rem elements from second array
   while(j<=e){
     temp.push_back(arr[j++]);
   }

   int k = 0;
   for(int idx = s;idx<=e;idx++){
     arr[idx] = temp[k++];
   }
   return cnt;
}


int inversion_Count(vector<int>&arr,int s,int e){
  //base case
  if(s>=e){
    return 0;
  }
 //rec case
 int mid = (s+e)/2;
 int C1 = inversion_Count(arr,s,mid);
 int C2 = inversion_Count(arr,mid+1,e);
 int CI = merge(arr,s,e);

   return C1+C2+CI;

}


int main(){

  vector<int>arr{0,5,2,3,1};

  int s = 0;
  int e = arr.size()-1;

  cout<<inversion_Count(arr,s,e)<<endl;



return 0;
}
