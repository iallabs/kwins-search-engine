#include <iostream>
#include <vector>

// resize function:
// vector <int> v(20)
// for (int i=; i<20;i++){
//   ....
//}
//v.resize(25);


// Ways of initialization of a vector:
// vector<int> v1;
// Suppose we have the same vector as main()
// vector<int> v2 = v1;
// vector<int> v3(v1);

// Create a vector of specific size: vector<int> Data(1000); (This line creates a vector with all it values set to 0)
// Direct initialization: vector<string> names(20, "Unknown");
// Multidimensionnal array: vector< vector<int> > Matrix;
// Multidimensionnal array with specific size: int N, M;   vector< vector<int> > Matrix(N, vector<int>(M, -1)); (all values are -1)

//Iterators:
// ###Reverse array function###
// template<typename T> void reverse_array(T *first, T *last){
//      if (first != last){              (pointer equality)
//            while(true){
//              swap(*first, *last);
//              first++;
//              if (first == last){
//                break;
//              }
//              last --;
//              if (first == last){
//                break;
//            }
//          }
//        }
// }


int main(){
  std::vector<int> v;
  int i=0;
  while (i<10){
    v.push_back((i+1)*(i+1)); // push_back to add value at the end, insert() function to add value in a specific position
    ++i;
  }
  for(i=9; i>0; --i){
    v[i] -= v[i-1];
    std::cout<< v[i] << std::endl;
  }
}
