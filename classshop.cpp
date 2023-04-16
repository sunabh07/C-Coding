#include<iostream>
using namespace std;

class shop{
    int id[100];
    int price[100];
    int c;
    public:
    void init(){
        c=0;

    }
    void setprice(){
       cin>>id[c];
       cin>>price[c];
       c++;
    }
    void display(){
        for(int i =0;i<c;i++){
        cout<<" id of the item is "<<id[i]<<" price is "<<price[i]<<endl;
        }
    }


};
int main(){
    shop a;
    a.init();
    a.setprice();
    //a.setprice();
    a.display();
    return 0;
}