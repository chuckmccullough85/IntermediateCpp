#include <string>
#include <iostream>

using namespace std;

class Widget
{
public:
	static void ResetCounter() 
	{
		// no this
		Counter = 0;
	}
	static int Count() {return Counter;}
	
	Widget() {Counter++;}
	~Widget() {Counter--;}
private:
	static int Counter;
};

int Widget::Counter = 0;

int main()
{
	Widget::ResetCounter();
	Widget w1;
	{
		Widget w2;
		cout << Widget::Count() << endl;
	}
	cout << Widget::Count() << endl;
}