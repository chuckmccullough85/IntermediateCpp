#include <iostream>
#include <string>

using namespace std;

class Parser
{
public:
	void Parse(string txt)
	{
		//...
	}
	void operator()(string txt) { Parse(txt); }
};

int main()
{
	Parser myparser;
	myparser.Parse("text");
	myparser("alternative");
}