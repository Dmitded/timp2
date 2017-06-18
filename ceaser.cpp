#include "ceaser.h"
#include <iostream>
#include <string>
using namespace std;

Ceaser::Ceaser(int key)
{
	this->key = key;
};

string Ceaser::encrypt(string input)
{
	for (int i = 0; i < input.size(); i++)
	{
		if ((input[i] > 'A') && (input[i] < 'Z'))
		{
			input[i] += key;
			if (input[i] > 'Z') {
				input[i] = 'A' + input[i] % ('Z'+1) + 1;
			}
		}
		else if ((input[i] > 'a') && (input[i] < 'z'))
		{
			input[i] = input[i] + key;
			if (input[i] > 'z') {
				input[i] = 'a' + input[i] % ('z'+1) + 1;
			}
		}
	}
	return input;
};

string Ceaser::decrypt(std::string input)
{

	for (int i = 0; i < input.size(); i++)
	{
		if ((input[i] > 'A'-2) && (input[i] < 'Z'+1))
		{
			input[i] -= key;
			if (input[i] < 'A'+1) {
				input[i] = 'Z' - key + ((input[i] + key) % 'A');
			}
		}
		if ((input[i] > 'a'-2) && (input[i] < 'z'+3))
		{
			input[i] -= key;
			if (input[i] < 'a'+1) {
				input[i] = 'z' - key + ((input[i] + key) % 'a')+2;
			}
		}
		return input;
	}
};
