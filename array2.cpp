#include<iostream>
using namespace std;
int main(){
int n;
int arr[n];
cin>>n;
for(int i=0;i<n;i++){
    if(arr[i+1]==arr[i]){
        cout<<i;
        break;

    }
    else cout<<"no repeat";
}

    return 0;
}