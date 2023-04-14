#include<iostream>
#include<cmath>
using namespace std;

class point{ 
      int x,y;
      public:
      point(int a,int b){
        x=a;
        y=b;
      }
      friend void distance(point,point);
      void display(){
        cout<<"The point on the plane is("<<x<<","<<y<<")"<<endl;
      }
};
void  distance(point p,point q){
    cout<<(sqrt(pow(q.x-p.x,2)+ pow(q.y-q.x,2)))<<endl;
}

int main(){
    point p(0,0);
    point q(2,2);
    p.display();
    q.display();
    distance(p,q);

    return 0;
}