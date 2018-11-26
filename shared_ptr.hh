#ifndef shared_ptr_hh
#define shared_ptr_hh
#include"smart_ptr.hh"

template<typename dataType>
class shared_ptr : public smart_ptr<dataType>{
    public:
    shared_ptr();
    shared_ptr(dataType* p);
    shared_ptr(const shared_ptr<dataType>& s);
    shared_ptr(shared_ptr<dataType>&& s);
    ~shared_ptr();
    shared_ptr& operator=(const shared_ptr<dataType>& s);
    shared_ptr& operator=(shared_ptr<dataType>&& s);
    shared_ptr& operator=(dataType* p);

    private:
    unsigned* count;
    void copy(const shared_ptr<dataType>& s);
};

#include"shared_ptr.cc"
#endif