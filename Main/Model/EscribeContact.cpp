/**
*
*Class to write in a File.dat each contact and each new contact
@author Ian García
@version 1.0.0
*/
#include "EscribeContact.h"
#include <list>
//#include <ofstream>
//#include <ifstream>
#include <fstream>

usign namespace Escribano;
usign std::filesystem::exists

  EscribeContact::EscribeContact(string file){
    EscribeContact::fileName=file;
    EscribeContact::contacts=c;
  }

  void readBeforeAssign(){
    if(!exists(EscribeContact::fileName)){
      std::cout<<" No file, verify it!"<<endl;
      ofstream file;
      file.open(EscribeContact::fileName);
      return;
    }
    std::string bA;
    ifstream fileLecture(EscribeContact::fileName);

    while(!fileLecture.eof()){
      fileLecture>>beforeAssigned;
    }
    fileLecture.close()
    EscribeContact::beforeAssigned=bA;
  }

  /**
  *Rewrite file and add new contacts
  *
  */
  void addContacts(list<Contact> c){
    std::string last_block="";
    for(Contact my_contact: c){
      last_block+=my_contact.getCard();
    }
    EscribeContact::beforeAssigned+=last_block;
    ofstream file;
    file.open(EscribeContact::fileName);
    file<< EscribeContact::beforeAssigned;
    file.close();

  }
