
#include<bits/stdc++.h>
using namespace std;

int f(int ind, int s, int sum, int arr[],int n){
    //condition not satisfied
    ///strictly done if array contains position 
    if(s>sum)return 0;
if(ind==n){
    ///condition satisfied
    if(s==sum)return 1;
    ///condition not satisfied
    else
        return 0;

}

s+=arr[ind];
int l = f(ind+1,s,sum,arr,n);

s-=arr[ind];
///not pick
int r = f(ind+1,s,sum,arr,n);
return l + r;



}

int main(){
int arr[] = {1,2,1};
int n = 3;
int sum = 2;
cout<<f(0,0,sum,arr,n)<<endl;
return 0;
}

///time complexity  2^n
