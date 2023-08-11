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

namespace ui
{
	class MenuItem
	{
	public:
		MenuItem(std::string text) : text(text) {}
		void Select() {  }
		std::string Title() const { return text; }
	private:
		std::string text;
	};
    typedef std::unique_ptr<MenuItem> MenuItemUp;
	
	class Menu
	{
	public:
		Menu(std::string title) : heading(title) {}
		void AddItem(const std::string& text)
		{
			items.push_back(std::make_unique<MenuItem>(text));
		}

		void AddItem(std::initializer_list<const char*> items)
		{
			std::for_each(items.begin(), items.end(), 
				[this] (auto item){AddItem(item);});
		}
		// this variadic template utilizes C++ 17 (-std=c++17) 
		// feature called folding.
		// the folding repeats the AddItem for each item in the pack
		// this feature is discussed in our advanced c++ course
		template <typename... Strings>
		void AddItem (const Strings&... text)
		{
			(AddItem(std::string(text)), ...);
		}		
	

		int Show() const;

	private:
		//void AddItem(){}
		std::string heading;
		std::vector<MenuItemUp> items;
	};


}