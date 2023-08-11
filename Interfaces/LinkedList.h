#pragma once
#include <memory>

namespace training::templates
{
    template <typename T>
    class ll_node
    {
    private:
        ll_node *next() { return this->right.get(); }
        const T *item() { return data; }
        ll_node(const T *item)
        {
            this->data = item;
            right.reset(nullptr);
        }
        std::unique_ptr<ll_node> right;
        const T *data;
        template <class> friend class LinkedList;
        template <typename> friend class ll_cursor;
    };

    template <typename T>
    class ll_cursor
    {
    public:
        bool has_next() { return current->next() != nullptr; }
        const T *next()
        {
            if (current != nullptr)
            {
                const T *data = current->item();
                current = current->next();
                return data;
            }
            else
                return nullptr;
        }

    private:
        ll_cursor (ll_node<T> *head) : current(head) {}
        ll_node<T> *current;
        template <typename> friend class LinkedList;
    };

template <typename T>
class LinkedList
{
public:
    LinkedList() : head(nullptr), tail(nullptr) {}
    LinkedList(const LinkedList &original) = delete;

    LinkedList<T>& operator = (const LinkedList<T>& op2)
    {
        // free my nodes
        while (head != nullptr)
        {
            auto cur = head;
            head=head->next();
            delete cur;
        }
        head = tail = nullptr;
        // copy op2's nodes
        auto it = op2.begin();
        const T* d;
        while ((d = it.next()) != nullptr)
            add(d);
        return (*this);
    }

    void add(const T *item)
    {
        auto dn = new ll_node<T>(item);
        if (tail != nullptr)
            tail->right.reset(dn);
        else
            head.reset(dn);
        tail = dn;
    }
    ll_cursor<T> begin() const { return ll_cursor<T>(head.get()); }

private:
    std::unique_ptr<ll_node<T>> head;
    ll_node<T> *tail;
};
}