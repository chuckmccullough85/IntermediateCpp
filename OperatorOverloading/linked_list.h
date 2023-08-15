#pragma once

namespace training::utility
{
    template <typename T>
    class ll_node
    {
    private:
        ll_node* next() { return this->right; }
        const T* item() { return data; }
        ll_node(const T* item)
        {
            this->data = item;
            right = nullptr;
        }
        ll_node* right;
        const T* data;
        template <typename> friend class linked_list;
        template <typename> friend class ll_cursor;
    };

    template <typename T>
    class ll_cursor
    {
    public:
        bool has_next() { return current->next() != nullptr; }
        const T* next()
        {
            if (current != nullptr)
            {
                const T* data = current->item();
                current = current->next();
                return data;
            }
            else
                return nullptr;
        }

    private:
        ll_cursor(ll_node<T>* head) : current(head) {}
        ll_node<T>* current;
        template <typename> friend class linked_list;
    };

    template <typename T>
    class linked_list
    {
    public:
        linked_list() : head(nullptr), tail(nullptr) {}
        linked_list(const linked_list& original) = delete;
        ~linked_list()
        {
            auto current = head;
            while (current != nullptr)
            {
                auto tmp = current;
                current = current->right;
                delete tmp;
            }
        }

        linked_list<T>& operator = (const linked_list<T>& op2)
        {
            // free my nodes
            while (head != nullptr)
            {
                auto cur = head;
                head = head->next();
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

        void add(const T* item)
        {
            auto dn = new ll_node<T>(item);
            if (tail != nullptr)
                tail->right = dn;
            else
                head = dn;
            tail = dn;
        }
        ll_cursor<T> begin() const { return ll_cursor<T>(head); }

    private:
        ll_node<T>* head;
        ll_node<T>* tail;
    };
}