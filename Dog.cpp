#include "Dog.h"
#include <iostream>

using namespace std;

void Dog::setDogDetails(int dgID, string dgname, string own)
{
  dogID = dgID;
  dogName = dgname;
  owner = own;
}

void Dog::displayDogDetials()
{
  cout << "DogID = " << dogID << endl;
  cout << "DogName = " << dogName << endl;
  cout << "DogOwner = " << owner << endl << endl;

}

void Dog::setOwner()
{
  cout << "Input new owner of Dog " << dogID << " : ";
  cin >> owner;
}