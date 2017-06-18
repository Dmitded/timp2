#pragma once
#include <iostream>
#include <string>

class Replace
{
private:

  std::string key;
  std::string ABC = "abcdefghijklmnopqrstuvwxyz";

public:
  Replace(std::string key);
  std::string encrypt(std::string input);
  std::string decrypt(std::string input);
};