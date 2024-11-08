#include "dog_list.h"

namespace examples::dog
{
    void dog_list::add_dog(const dog *d)
    {
        auto dn = new ll_node(d);
        if (tail != nullptr)
            tail->right = dn;
        else
            head = dn;
        tail = dn;
    }

/*    dog_list::dog_list(const dog_list& original)
    {
        auto it = original.begin();
        const dog* d;
        while ((d = it.next()) != nullptr)
            add_dog(d);
    }
*/
    dog_list::~dog_list()
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