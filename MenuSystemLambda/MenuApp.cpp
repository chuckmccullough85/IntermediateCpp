/* This component and its source code representation are copyright protected
 * and proprietary to LC McCullough, Inc, Worldwide D/B/A McCullough & Associates
 *
 * This component and source code may be used for instructional and
 * evaluation purposes only. No part of this component or its source code
 * may be sold, transferred, or publicly posted, nor may it be used in a
 * commercial or production environment, without the express written consent
 * of McCullough & Associates
 *
 * Copyright (c) 2021 McCullough & Associates
 * http://www.McCulloughAssociates.com   
 */

#include <memory>
#include <utility>
#include "Menu.h"

using namespace std;
using namespace ui;

struct ShowCommand 
{
	void operator()(MenuItem& item) 
	{
		cout << item.Title() << " selected " << endl;
	}
};

struct QuitCommand 
{
	void operator()(MenuItem& item) 
	{
		cout << "quit" << endl;
		exit(0);
	}
};	

void Show(MenuItem& item) 
{
	cout << item.Title() << " selected " << endl;
}
void Quit(MenuItem& item) 
{
	cout << "quit" << endl;
	exit(0);
}

int main()
{
	ShowCommand showCmd;
	QuitCommand quitCmd;
	bool running = true;

	Menu mainMenu("Main Menu");
	mainMenu.AddItem("Add Shape", showCmd)
		.AddItem("Show Area", Show)
		.AddItem("Show Perimeter", [](MenuItem&) { cout << "Show Perimeter" << endl; })
		.AddItem("Quit", [&running](MenuItem&) { running = false; });
		
	while (running) mainMenu.Show();
    return 0;
}

