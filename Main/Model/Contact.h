/**
 *Prototype in header file
 *
 *
 */
namespace Contacto
{
  using namespace std;
  #ifndef Contact_H // include guard
  #define Contact_H

    class Contact{
    private:
      string name;
      long int phoneNumber;

    public:
      Contact(string nombre, long int numero_tel); // nom, int number);
      void setNumber(long int number);
      void setName(string nom);
      string getName();
      int getNumber();
      string getCard();
    };

}

#endif /* MY_CLASS_H */
