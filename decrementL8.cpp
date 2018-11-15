#include<iostream>
using namespace std;
class ZooAnimal
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;


    public:
     void set_weight(int w)
{
weight=w;
}

      void operator -- (int )
      {
        weight--;


      }
void Display()
{
cout<<"weigth="<<weight;
}
   };
  int main() {
    int w;
    cout<<"Enter weight"<<endl;
    cin>>w;
  ZooAnimal z1;
z1.set_weight(w);
  cout<<"Decrease weight"<<endl;
  z1--;
z1.Display();

  return 0;
}
