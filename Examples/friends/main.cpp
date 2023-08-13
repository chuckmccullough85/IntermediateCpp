#include <iostream>
#include <string>

using namespace std;

class Dog
{
public:
	// member functions not shown

	friend Dog MakeDog(string name)
	{
		Dog d;
		d.name = name;
		return d;
	}
	friend class Cat;
private:
	string name;
};
Dog MakeDog(string name);

class Cat
{
public:
	void FixDog(Dog d) { d.name = "stupid"; }
};

int main()
{
	auto d = MakeDog("");
}