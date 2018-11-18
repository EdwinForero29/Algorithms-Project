#ifndef smart_ptr_hh
#define smart_ptr_hh

template<typename dataType>
class smart_ptr{
    public:
    smart_ptr();
    smart_ptr(dataType* p);
    smart_ptr(const smart_ptr<dataType>& s);
    smart_ptr(smart_ptr<dataType>&& s);
    ~smart_ptr();
    smart_ptr& operator=(const smart_ptr<dataType>& s);
    smart_ptr& operator=(smart_ptr<dataType>&& s);
    dataType& operator*();
    dataType* operator->();
    bool operator!();
    bool operator==(const smart_ptr<dataType>& s);
    bool operator!=(const smart_ptr<dataType>& s);
    bool operator==(const dataType*& p);
    bool operator!=(const dataType*& p);
    
    protected:
    dataType* pointer;
    void copy(const smart_ptr<dataType>& s);
};

#include"smart_ptr.cc"

#endif