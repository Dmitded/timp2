#include "replace.h"
#include <string>
#include <iostream>
using namespace std;

Replace::Replace(string key)
{
	this->key = key;
};


string Replace::encrypt(string input)
{
	for (int i = 0; i < input.size(); i++)
	{
		for (int j = 0; j < ABC.size(); j++)
		{
			if (input[i] == ABC[j])
			{
				input[i] = key[j];
				break;
			}
			else if ((input[i] - 32) == ABC[j])
			{
				input[i] = key[j] + 32;
			}
		}
	}
	return input;
};

string Replace::decrypt(string input)
{
	for (int i = 0; i < input.size(); i++)
	{
		for (int j = 0; j < ABC.size(); j++)
		{
			if (input[i]  == key[j])
			{
				input[i] = ABC[j] ;
				break;
			}
			else if ((input[i]-32) == key[j])
			{
				input[i] = ABC[j] + 32;
				break;
			}
		}
	}
	return input;
};