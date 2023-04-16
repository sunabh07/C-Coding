#include<iostream>
using namespace std;

class great{
    int a,b,c;
    public:
    void init(){
        cin>>a>>b>>c;
    }
    void find(){
        if(a>b && a>c){
            cout<<a<<endl;
        }
        else if(b>a && b>c){
            cout<<b<<endl;
        }
        else if(c>a && c>b){
            cout<<c<<endl;
        }
    }


};
int main(){
    great one;
    one.init();
    one.find();
    return 0;
}