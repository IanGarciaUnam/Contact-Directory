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
      int phoneNumber;

    public:
      Contact(string nombre, int numero_tel); // nom, int number);
      void setNumber(int number);
      void setName(string nom);
      string getName();
      int getNumber();
    };

}

#endif /* MY_CLASS_H */
