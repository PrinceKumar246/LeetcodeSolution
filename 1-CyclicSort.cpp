#include<iostream>
using namespace std;
int main(){
 int arr[]={2,6,4,5,3,1};
 int n=sizeof(arr)/sizeof(arr[0]);
 for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
 }
 cout<<endl;

   // Cyclic Sort
  int i=0;
  while(i<n){
   int CurrentIdx=arr[i]-1;
   if(i==CurrentIdx) i++;
   else swap(arr[i], arr[CurrentIdx]);
   

  }
  
   for(int i=0; i<n; i++){
   cout<<arr[i]<<" ";
   }
 
}