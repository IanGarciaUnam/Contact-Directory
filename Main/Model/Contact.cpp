/**
*
*Class to model Contacs as Object
@author Ian García
@version 1.0.0
*/
#include <bits/stdc++.h>
#include "Contact.h"
using namespace Contacto;

  Contact::Contact(std::string nombre, int phone_number){
    Contact::phoneNumber=phone_number;
    Contact::name=nombre;
  }

  void Contact::setNumber(int number){
  Contact::phoneNumber=number;
  }

  void Contact::setName(std::string nom){
    Contact::name=nom;
  }

  string Contact::getName(){
    return Contact::name;
  }

  int Contact::getNumber(){
    return Contact::phoneNumber;
  }
