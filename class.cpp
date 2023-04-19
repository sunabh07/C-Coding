#include<iostream>
using namespace std;

class student{
    public:
string name;
int age;

void printinfo(){
    cout<<name<<endl;
    cout<<age;
}

bool operator == (student &a){
    if(name==a.name && age==a.age){
        return true;
    }
    return false;
}




};

int main(){
student a;
student b;
    cin>>a.name;
    cin>>a.age;
cin>>b.name;
cin>>b.age;

 

if(b==a){
    cout<<"same"<<endl;

}
else cout<<"not";
    return 0;
}
