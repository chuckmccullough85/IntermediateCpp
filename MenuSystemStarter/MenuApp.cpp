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
#include "Menu.h"

using namespace std;
using namespace ui;

int main()
{
	Menu mainMenu("Main Menu");
	// note - Menu has an AddItem overload that accepts a 
	// std::initializer_list.  The compiler will automatically create one
	// when a list of objects is enclosed in { } 
	mainMenu.AddItem({"Add Shape", "Show Area", "Show Perimeter", "Quit"});

	// alternative is to use a variadic template.  Note no {}
	// mainMenu.AddItem("Add Shape", "Show Area", "Show Perimeter", "Quit");

	auto resp = mainMenu.Show();
	switch (resp)
	{
	case 1:
		cout << "Add selected" << endl;
		break;
	case 2:
		cout << "Area selected" << endl;
		break;
	case 3:
		cout << "Perimeter selected" << endl;
		break;
	case 4:
		cout << "quit" << endl;
		break;
	}
    return 0;
}

