
#include<bits/stdc++.h>
using namespace std;
bool f(int ind, vector<int>&ds,int s, int sum, int arr[], int n){

/* void    /if(ind==n){
    if(s==sum){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return ;
}

ds.push_back(arr[ind]);
s = s + arr[ind];
f(ind+1,ds,s,sum,arr,n);

s = s - arr[ind];
ds.pop_back();
///not pick
f(ind+1,ds,s,sum,arr,n);

*/

if(ind==n){
    if(s==sum){
        ///condition is satisfied
        for(auto it:ds)
            cout<<it<<" ";
            cout<<endl;
            return true;
    }
    ///condition is not satisfied
    return false;

}

ds.push_back(arr[ind]);
s = s + arr[ind];
if(f(ind+1,ds,s,sum,arr,n)==true){
    return true;
}

s = s-arr[ind];
ds.pop_back();
if(f(ind+1,ds,s,sum,arr,n)==true){
    return true;
}





return false;



}
int main(){


int arr[] = {1,2,1};
int n = 3;
int sum = 3;
vector<int>ds;
f(0,ds,0,sum,arr,n);


}
