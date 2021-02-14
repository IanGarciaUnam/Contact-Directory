/**
*
*Class to write in a File.dat each contact and each new contact
@author Ian García
@version 1.0.0
*/
#include "EscribeContact.h"
#include <list>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <cstdint>
#include <cstdlib>
using namespace Escribano;
//using std::filesystem::exists;

  EscribeContact::EscribeContact(string file){
    EscribeContact::fileName=file;
  }

  void EscribeContact::readBeforeAssign(){
    ifstream ifile((EscribeContact::fileName));
    if(!ifile){
      std::cout<<" No file, verify it!"<<endl;
      ofstream file;
      file.open(EscribeContact::fileName);
      return;
    }
    std::string linea;
    ifstream fileLecture(EscribeContact::fileName);
    EscribeContact::beforeAssigned="";
    while(getline(fileLecture, linea)){
     EscribeContact::beforeAssigned+=linea+"\n";
    }
    fileLecture.close();

  }

  /**
  *Rewrite file and add new contacts
  *
  */
  void EscribeContact::addContacts(list<std::string> c){
    std::string last_block="";
    for(string my_contact: c){
      last_block+=my_contact;
    }
    EscribeContact::beforeAssigned+=last_block;
    ofstream file;
    file.open(EscribeContact::fileName);
    file<< EscribeContact::beforeAssigned;
    file.close();

  }
