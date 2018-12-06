#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int FindMaxSum(vector<int> arr, int n){
int incl=arr[0];
int excl=0;
int excl_new, i;
for(i=1; i<n; i++){
    excl_new=max(incl, excl);
    incl=excl+arr[i];
    excl=excl_new;
}
return max(incl, excl);
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for (int i=0; i<n; i++){
    cin>>arr[i];
}
cout<<FindMaxSum(arr, n);
return 0;
}
