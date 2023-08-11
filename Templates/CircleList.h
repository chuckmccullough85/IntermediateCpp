#pragma once
#include "Circle.h"

namespace training::utility
{
    using namespace training::geometry;

    class ll_node
    {
    private:
        ll_node* next() { return this->right; }
        const Circle* item() { return dptr; }
        ll_node(const Circle* dptr)
        {
            this->dptr = dptr;
            right = nullptr;
        }
        ll_node* right;
        const Circle* dptr;
        friend class CircleList;
        friend class ll_cursor;
    };

    class ll_cursor
    {
    public:
        bool has_next() { return current->next() != nullptr; }
        const Circle* next()
        {
            if (current != nullptr)
            {
                const Circle* data = current->item();
                current = current->next();
                return data;
            }
            else
                return nullptr;
        }

    private:
        ll_cursor(ll_node* head) : current(head) {}
        ll_node* current;
        friend class CircleList;
    };

    class CircleList
    {
    public:
        CircleList() : head(nullptr), tail(nullptr) {}
        CircleList(const CircleList& original) = delete;
        ~CircleList();
        void AddCircle(const Circle* c);
        ll_cursor begin() const { return ll_cursor(head); }

    private:
        ll_node* head;
        ll_node* tail;
    };
}

