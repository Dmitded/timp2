#include <iostream>
#include <string>
#include "replace.h"
#include "ceaser.h"

using namespace std;

int main()
{
  //Initialization of variables for working with ciphers
  char exp;
  string str;
  string dict;
  int key;

  //Sequential output of key selection lines
  cout << "Please, chose encrypt/decrypt [e/d]" << endl;
  cin >> exp;

  //A selection branch for use
  switch (exp) {
    case 'e':
    {
      //Encoding branch
      cout << "Please, chose ceaser/replace [c/r]" << endl;
      cin >> exp;

      switch (exp) {
        //The Caesar coding branch
        case 'c':
        {
          cout << "Enter your string" << endl;
          cin >> str;
          cout << "key" << endl;
          cin >> key;

          Ceaser billchipher(key);
          cout <<  billchipher.encrypt(str) << endl;
          break;
        }
        //The Replace coding branch
        case 'r':
        {
          cout << "Enter your string" << endl;
          cin >> str;
          cout << "key" << endl;
          cin >> dict;

          Replace billchipher(dict);
          cout <<  billchipher.encrypt(str) << endl;
        }
      }
      break;
    }
    case 'd':
    {
      //Decoding branch
      cout << "Please, chose ceaser/replace [c/r]" << endl;
      cin >> exp;

      switch (exp) {
      case 'c':
      {
        //The Caesar coding branch
        cout << "Enter your string" << endl;
        cin >> str;
        cout << "key" << endl;
        cin >> key;

        Ceaser billchipher(key);
        cout <<  billchipher.decrypt(str) << endl;
        break;
      }
      case 'r':
      {
        //The Replace coding branch
        cout << "Enter your string" << endl;
        cin >> str;
        cout << "key" << endl;
        cin >> dict;

        Replace billchipher(dict);
        cout <<  billchipher.decrypt(str) << endl;
        break;
      }
      break;
    }
    break;
    }
  }
  return 0;
}