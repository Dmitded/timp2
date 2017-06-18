#pragma once
#include <string>

class Ceaser
{
private:
  int key;

public:
  Ceaser(int key);
  std::string encrypt(std::string input);
  std::string decrypt(std::string input);
};