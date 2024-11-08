#pragma once
#include "dog.h"

namespace examples::dog
{

    class ll_node
    {
    private:
        ll_node *next() { return this->right; }
        const dog *item() { return dptr; }
        ll_node(const dog *dptr)
        {
            this->dptr = dptr;
            right = nullptr;
        }
        ll_node *right;
        const dog *dptr;
        friend class dog_list;
        friend class ll_cursor;
    };

    class ll_cursor
    {
    public:
        bool has_next() { return current->next() != nullptr; }
        const dog *next()
        {
            if (current != nullptr)
            {
                const dog *data = current->item();
                current = current->next();
                return data;
            }
            else
                return nullptr;
        }

    private:
        ll_cursor(ll_node *head) : current(head) {}
        ll_node *current;
        friend class dog_list;
    };

    class dog_list
    {
    public:
        dog_list() : head(nullptr), tail(nullptr) {}
        dog_list(const dog_list& original)=delete;
        ~dog_list();
        void add_dog(const dog *d);
        ll_cursor begin() const { return ll_cursor(head); }

    private:
        ll_node *head;
        ll_node *tail;
    };
}