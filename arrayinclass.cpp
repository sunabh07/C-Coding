#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;
    public:
    void setid(){
        cout<<"Enter the id"<<endl;
        cin>>id;
    }
    void getid(){
        cout<<"The id of the employee is " << id <<endl;
    }


};
int main(){
    employee a[4];
    for(int i=0;i<4;i++){
        a[i].setid();
        a[i].getid();
    }
    return 0;
}

