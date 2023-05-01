#include<iostream>
using namespace std;
int main(){

/*char arr[7];
int i;
for(i=0;i<6;i++){
    cin>>arr[i];

}
for(i=0;i<6;i++){
    cout<<int(arr[i])<<endl;
}*/
/*char arr[6];
int i;
for(i=0;i<5;i++){
    cin>>arr[i];
}
bool check=1;
for(i=0;i<5;i++)
{
    if(arr[i]!=arr[4-i]){
    check=0;
    break;
}
}
if(check==1)
cout<<"pailndrone"<<endl;
else
{
    cout<<"not"<<endl;

}*/
/*  int i,j,pd,curr=2,ans=2;
int a[7];
for(i=0;i<7;i++){
    cin>>a[i];

}
pd=a[1]-a[0];

for(i=0;i<7;i++){
    if(pd==(a[i]-a[i-1])){
        curr++;
    }
    else{
        curr=2;
    }
    ans=max(ans,curr);
    }
cout<<ans;
*/
int i,arr[3];
for(i=0;i<3;i++){
    cin>>arr[i];

}
int *ptr=arr;
for(i=0;i<3;i++){
//cout<<*ptr<<endl;
//ptr++;
cout<<*(arr+i)<<endl;

}


return 0;
}