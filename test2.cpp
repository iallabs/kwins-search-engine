#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
const int sides = 6;
inline int r_sides(){return rand()%sides + 1;};
using namespace std;

inline void swap(int &i, int &j){
  int temp=i;
  i=j;
  j=temp;
}
inine void swap(double &i, double &j){
  double temp=i;
  i=j;
  j=temp;
}
void monte_carlo(int trials){
  const int n_dice = 2;
  int d1, d2;
  srand(clock());
  int *outcomes = new int[n_dice*sides+1];
  for (int j=0;j<trials;++j){
    outcomes[(d1=r_sides())+(d2=r_sides())]++;
  }
  cout<<"probability\n";
  for(int j=2;j<n_dice*sides+1;++j){
    cout<<"j="<<j<<" p="
        <<static_cast<double>(outcomes[j])/trials
        <<endl;
}
}

int main(){
  int trials;
  cout<<"give a number of trials pls"<<endl;
  cin >> trials;
  monte_carlo(trials);

}
