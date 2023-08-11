#include "CircleList.h"

namespace training::utility
{
    void CircleList::AddCircle(const Circle* c)
    {
        auto dn = new ll_node(c);
        if (tail != nullptr)
            tail->right = dn;
        else
            head = dn;
        tail = dn;
    }

    /*    CircleList::CircleList(const CircleList& original)
        {
            auto it = original.begin();
            const Circle* d;
            while ((d = it.next()) != nullptr)
                add_Circle(d);
        }
    */
    CircleList::~CircleList()
    {
        auto current = head;
        while (current != nullptr)
        {
            auto tmp = current;
            current = current->right;
            delete tmp;
        }
    }




}