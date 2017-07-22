#include <iostream>
#include <cstring>
#include <complex>

class point{
public:
  double getx(){return x;}
  void setx(double v){x = v;}
  double gety(){return y;}
  void sety(double w){x = w;}
  point(double a=0.0, double b=0.0){this->x=a; this->y=b;}
private:
  double x, y;
};

point operator+(point& p1, point& p2){
  return point(p1.getx()+p2.getx(), p1.gety()+p2.gety());
}


std::ostream& operator<< (std::ostream& out, point& p){
  out<<"("<<p.getx()<<", "<<p.gety()<<")";
  return out;
}

int main(){
  point d1= point(3.7,6.0);
  point d2= point(1.0,2.0);
  point d3 = d1+d2;
  std::cout<<d3<<std::endl;
}
