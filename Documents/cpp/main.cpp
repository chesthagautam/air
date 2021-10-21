#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;


void unions(int array1[],int array2[],int n){
  int i=0;
  while(array1[i]!=-1){
    i++;
  }
  int j=0;
  while(array2[j]!=-1){
    array1[i-1] = array2[j];
    i++;
    j++;
  }
}

void intersection(int array1[],int array2[],int n){
  int i=0,j=0;
  while(array1[i]!=-1 && array2[j]!=-1){
    if(array1[i]>array2[j]){
      j++;
    }else{
      if(array1[i]<array2[j]){
        i++;
      }else{
         cout<<array1[i]<<endl;
         i++;
         j++;
      }
    }
  }
}

void print(int array1[],int n){
  int i=0;
  for(i=0;array1[i]!=-1;i++){
    cout<<array1[i]<<",";
  }
}

int main(){
  int n=100;
  int array1[n] = {1,2,3,4,5};
  int array2[n] = {3,4,5,6,7,8};
  intersection(array1,array2,n);
  unions(array1,array2,n);
  print(array1,n);
}
