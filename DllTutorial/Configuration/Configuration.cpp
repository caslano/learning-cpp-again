// MathLibrary.cpp : Defines the exported functions for the DLL.
#include <utility>
#include <limits.h>
#include <string>
#include "Configuration.h"

using namespace std;

// DLL internal state variables:
static const string _version = "1.2022-05.34";
static const string _key = "5ED9319C-83B6-4FF2-9940-13DAC5D02853";
static const string _environment = "UAT";


string Version()
{
	return _version;
}

string Key()
{
	return _key;
}

string Environment()
{
	return _environment;
}

