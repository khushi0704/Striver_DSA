#include <bits/stdc++.h>
void sortArray(vector<int> &arr, int n) {
  int cntzero = 0;
  int cntone = 0;
  int cnttwo = 0;

  // update count of each element
  for (int i = 0; i < n; i++){
      if(arr[i]==0){
          cntzero++;
      }
      else if(arr[i]==1){
          cntone++;
      }
      else{
          cnttwo++;
      }
  }

  //now update the array with this count
  for(int j=0;j<n;j++){
      while(cntzero!=0){
          arr[j]=0;
          cntzero--;
          j++;
      }
      while(cntone!=0){
          arr[j]=1;
          cntone--;
          j++;
      }
      while(cnttwo!=0){
          arr[j]=2;
          cnttwo--;
          j++;
      }
  }
}

// DUTCH NATIONAL FLAG ALGORITHM
#include <bits/stdc++.h>
void sortArray(vector<int> &arr, int n) {
   int l=0;
   int m=0;
   int h=n-1;
   while(m<=h){
       if(arr[m]==0){
           // zero at the beginning
           int temp=arr[m];
           arr[m]=arr[l];
           arr[l]=temp;
           l++;
           m++;
       }
       else if(arr[m]==1){
           // 1 will stay in between
           m++;
       }
       else{
           // 2 will be at the end always
           int temp=arr[m];
           arr[m]=arr[h];
           arr[h]=temp;
           h--; 
       }
   }
}
