#include <iostream>
#include <string>
#include "replace.h"
#include "ceaser.h"

using namespace std;

int main()
{
  char exp;
  string str;
  string dict;
  int key;

  cout << "Please, chose encrypt/decrypt [e/d]" << endl;
  cin >> exp;

  switch (exp) {
    case 'e':
    {
      cout << "Please, chose ceaser/replace [c/r]" << endl;
      cin >> exp;

      switch (exp) {
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
      cout << "Please, chose ceaser/replace [c/r]" << endl;
      cin >> exp;

      switch (exp) {
      case 'c':
      {
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