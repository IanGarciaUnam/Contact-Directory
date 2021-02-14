
  #include <iostream>
  #include "Model/Contact.cpp"
  #include "Model/EscribeContact.cpp"
  #include<list>
  #include <curses.h>
  #include "string"
  #include <cstdlib>
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
  class Receptor_Termux{
    public:
      Receptor_Termux(){}
      list<std::string> writeContact(){
        string name;
        long int number;
        int opt;
        list<std::string> contacts_list_added;
        while(true){
          cout<<"INGRESE NOMBRE COMPLETO: "<<endl;
          getline(cin,name);
          //cin.ignore();//Limpia buffer

          cout<<"INGRESE NÚMERO TELEFÓNICO: "<<endl;
          cin>>number;
          Contact c= Contact(name, number);
          contacts_list_added.push_back(c.getCard());
          cin.ignore();//Limpia buffer

          do{

            cout<<"GUARDADO"<<endl;
            cout<<"INGRESAR MÁS CONTACTOS: 1-Yes/0-No "<<endl;
            cin>>opt;


            switch (opt) {
              case 0:
                return contacts_list_added;

              case 1:
                cout<<"Saliendo"<<endl;
                break;

            }
              cin.ignore();
          }while(opt<0 || opt>1);
        //Limpia buffer
        }
        return contacts_list_added;
      }



    };



 int main(){

   list <string> lista;

   EscribeContact e= EscribeContact("directory.dat");
   Receptor_Termux r= Receptor_Termux();
   e.readBeforeAssign();
   e.addContacts(r.writeContact());
   return 0;
}
