#include <bits/stdc++.h> 

int f(vector<int>&arr,int low, int high){
    int pivort = arr[low];

int i= low;
int j = high;

while(i<j){
    while(arr[i]<=pivort && i<=high-1){
        i++;
    }
    while(arr[j]>pivort&& j>=low + 1){
        j--;
    }
    if(i<j)swap(arr[i],arr[j]);


}
swap(arr[low],arr[j]);
return j;


}



int qs(vector<int>&arr, int low, int high){
      
      if(low<high){
          int partition = f(arr,low,high);
          qs(arr,low, partition-1);
          qs(arr,partition+1,high);

      }
}


vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    qs(arr,0,arr.size()-1);
    return arr;


}
//time complexity O(nlogn);
///space complexity O(1);
