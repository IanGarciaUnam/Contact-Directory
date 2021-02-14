/**
*
*Class to write in a File.dat each contact and each new contact
@author Ian García
@version 1.0.0
*/
#include <list>
namespace Escribano{
  class EscribeContact{
    private:
      /*File's name*/
      std::string fileName;
      /* String of contacts*/
      list<std::string> contacts;
      /*Content of the file*/
      string beforeAssigned;

    public:
      /*Builder*/
      EscribeContact(string file);
      /*Relocate data of directory.dat*/
      void readBeforeAssign();
      /*Add contacts to the file and close it
      *@param c string list
      */
      void addContacts(list<std::string> c);


    };
  }
