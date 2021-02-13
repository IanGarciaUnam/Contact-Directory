/**
*
*Class to write in a File.dat each contact and each new contact
@author Ian García
@version 1.0.0
*/
#include <list>
#include "Contact.cpp"
namespace Escribano{
  usign namespace std;
  class EscribeContact{
    private:
      string fileName;
      list<Contact> contacts;
      string beforeAssigned;

    public:
      EscribeContact(string file);
      void readBeforeAssign();
      void addContacts(list<Contact> c);
      

  }



}
