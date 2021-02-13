
 #include <iostream>
 #include "Model/Contact.cpp"
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
   Contact c = Contact("Ivan", 20);
   std::cout<< c.getName()<<endl;
   std::cout<<c.getNumber()<<endl;
   std::cout<< "Bienvenido"<<endl;
   return 0;
}
