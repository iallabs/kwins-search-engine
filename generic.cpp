#include <iostream>
#include <cstring>
#include <complex>


template <typename T>
  inline void swap2(T& d, T& s){
    T temp = d;
    d=s;
    s=temp;
  }
template <typename T>
  T sum(T *t){
    T sum = 0;
    for(int i=0;i<sizeof(t);++i){
      sum += *(t+i);
    }
    return sum;
  }




int main(){
  int m=5, n=10;
  int k[10]={5,6,101,19909,21,8,9,78,9098,565};
  double l[10]={2.3,3.6,4.8,5.9,5.7,34.5,324.324,12.322,123.43,743.9};
  double x=5.3, y=10.6;
  std::complex <double> r(2.3,4.5), h(5.9,10.6);
  swap2(m,n);
  swap2(x,y);
  swap2(r,h);
  std::cout<<m<<" "<<n<<std::endl;
  std::cout<<x<<" "<<y<<std::endl;
  std::cout<<r<<" "<<h<<std::endl;
  std::cout<<sum(k)<<std::endl;
  std::cout<<sum(l)<<std::endl;
  return 0;

}
