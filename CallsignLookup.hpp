#pragma once
#include <fstream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

class CCallsignLookup
{
private:
	std::map<string, string> callsigns;


public:

	CCallsignLookup(string fileName);
	string getCallsign(string airlineCode);

	~CCallsignLookup();
};