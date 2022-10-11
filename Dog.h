#include <string>

using namespace std;

class Dog
{
  private :
    int dogID;
    string dogName;
    string owner;

  public :
    void setDogDetails(int dgID, string dgname, string own);
    void displayDogDetials();
    void setOwner();
};