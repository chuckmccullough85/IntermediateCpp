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

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <initializer_list>
#include <algorithm>
#include <utility>
#include <functional>

namespace ui
{
	using namespace std;

	class MenuItem;
	using Command = function<void(MenuItem&)>;

	class MenuItem
	{
	public:
		MenuItem(string text, Command cmd) : text(text), cmd(cmd) {}
		void Select() { cmd(*this); }
		string Title() const { return text; }
	private:
		string text;
		Command cmd;
	};
    typedef unique_ptr<MenuItem> MenuItemUp;
	
	class Menu
	{
	public:
		Menu(string title) : heading(title) {}
		Menu& AddItem(const string& text, Command cmd)
		{
			items.push_back(make_unique<MenuItem>(text, cmd));
			return *this;
		}

		int Show() const;

	private:
		//void AddItem(){}
		string heading;
		vector<MenuItemUp> items;
	};


}