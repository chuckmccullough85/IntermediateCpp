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
#include <algorithm>
#include "Menu.h"
namespace ui
{
    int Menu::Show() const
    {
        int sel;
        int i;
        do
        {
            std::cout << "\n\n\n\n\n\n\n\n\n\n\n"
                      << std::endl;
            std::cout << "------------------ " << heading << " ------------------" << std::endl
                      << std::endl;
            i = 1;
            std::for_each(items.begin(), items.end(), 
                [&i] (auto& mi) {std::cout << i++ << ") " << mi->Title() << std::endl;});
            i--;
            std::cout << "Enter selection (1-" << i << "): " << std::flush;
            std::string tmp;
            std::cin >> tmp;
            try {sel = std::stoi(tmp);} 
            catch(const std::invalid_argument&) {sel = -1;}
            sel--;
            if (sel >= 0 && sel < i)
                items[sel]->Select();
        } while (sel < 0 || sel >= i);
        return sel + 1;
    }
}