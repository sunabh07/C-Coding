#include<iostream>
using namespace std;

class student{
     protected:
     int roll_no;
     public:
     void set(int a){
        roll_no=a;
     }
     void get(){
        cout<<"Your roll no is "<<roll_no<<endl;
     }

};

class test : virtual public student{
protected:
float maths,physics; 
public:
void set1(float a,float b){
    maths=a;
    physics=b;
}
void print(){
    cout<<"Your marks in maths and physics are "<<maths<<" and "<<physics<<endl;
}

};
class sports : virtual public student{
protected:
float score;
public:
void set2(int a){
     score=a;

}
void print1(){
    cout<<"Your score is "<<score<<endl;
}
};

class result : public test , public sports{
    protected:
    float percentage;
    public:
    void set3(){
        percentage = (maths+physics+score)/3;
    }
    void print2(){
        get();
        print();
        print1();
        cout<<"Your percentage is "<<percentage<<endl;
    }
};

int main (){
    result r;
    r.set(20);
    r.set1(25.5,24.6);
    r.set2(60);
    r.set3();
    r.print2();


    return 0;
}