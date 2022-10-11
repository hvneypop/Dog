#include <iostream>
#include "Dog.h"

using namespace std;

int main() {
  
  Dog d[3];

  d[0].setDogDetails(1,"Zimba","Lucy");
  d[1].setDogDetails(2,"Timmy","Kate");
  d[2].setDogDetails(3,"Toby","Joel");

  for(int i=0;i<3;i++)
  {
    d[i].setOwner();
  }

  cout << endl;

  for(int j=0;j<3;j++)
  {
    d[j].displayDogDetials();
  }

return 0;

}