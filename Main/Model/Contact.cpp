/**
*
*Class to model Contacs as Object
@author Ian García
@version 1.0.0
*/
#include <bits/stdc++.h>
#include "Contact.h"
#include <string.h>
#include <cstring>
#include <boost/algorithm/string.hpp>
using namespace Contacto;
using namespace std;
  Contact::Contact(string nombre, int phone_number){
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
  string Contact::getCard(){
    string card="Nombre Completo:\t" + boost::to_upper_copy(Contact::name)+ "\nTélefono:\t"+std::to_string(Contact::phoneNumber);
    string separator="\n======================================\n\n";
  return card+separator;
  }
