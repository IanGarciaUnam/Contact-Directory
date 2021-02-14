
  #include <iostream>
  #include "Model/Contact.cpp"
  #include "Model/EscribeContact.cpp"
  #include<list>
  #include <curses.h>
 using namespace std;//Will be erased for the end-version
 using namespace Escribano;
 /**
  * Contacs directory designed in CPP.
  * Practical Excercise
  * @author Ian García
  * @date 13-02-21
  * @version 1.0.0
  *
  */


 int main(){

   list <string> lista;

   EscribeContact e= EscribeContact("directory.dat");
   Contact c1 = Contact("Ivan", 204423);
   Contact c2 = Contact("Vani", 213243);
   lista.push_back(c1.getCard());
   lista.push_back(c2.getCard());
   e.readBeforeAssign();
   e.addContacts(lista);
   //wgetch();
   return 0;
}
