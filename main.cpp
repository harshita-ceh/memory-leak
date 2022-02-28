#include <iostream>
using namespace std;
class ABC{
public:
ABC(){
  cout<<"Creating object"<<endl;
}
~ABC(){
  cout<<"Deleting object"<<endl;
}
};
int main() {
  ABC obj;
  int *data;
  int size;
  cout<<"bytes to allocate?"<<endl;
  cin>>size;
  data=new int[size];
  cout<<"memory alocateeeeed"<<data<<endl;
  delete data;
}