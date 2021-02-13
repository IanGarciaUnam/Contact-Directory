
  #include <iostream>
  #include "Model/Contact.cpp"
  #include "Model/EscribeContact.cpp"
  #include<list>
 using namespace std;//Will be erased for the end-version

 /**
  * Contacs directory designed in CPP.
  * Practical Excercise
  * @author Ian García
  * @date 13-02-21
  * @version 1.0.0
  *
  */


 int main(){

   list <Contact> lista;

   EscribeContact e= EscribeContact("directory.dat");
   Contact c1 = Contact("Ivan", 204423);
   Contact c2 = Contact("Vani", 213243);
   lista.push_back(c1);
   lista.push_back(c2);
   e.readBeforeAssign();
   e.addContacts(lista);
   getch();
   return 0;
}
