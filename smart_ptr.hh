#ifndef smart_ptr_hh
#define smart_ptr_hh

template<typename dataType>
class smart_prt{
    public:
    smart_prt();
    smart_prt(dataType* p);
    smart_prt(const smart_prt<dataType>& s);
    smart_prt(smart_prt<dataType>&& s);
    ~smart_prt();
    smart_prt& operator=(const smart_prt<dataType>& s);
    smart_ptr& operator=(smart_prt<dataType>&& s);
    dataType& operator*();
    dataType* operator->();
    bool operator!();
    bool operator==(const smart_prt<dataType>& s);
    bool operator!=(const smart_prt<dataType>& s);
    bool operator==(const dataType*& p);
    bool operator!=(const dataType*& p);
    bool operator==(nullptr);
    bool operator!=(nullptr);
    
    protected:
    dataType* pointer;
    void copy(const smart_prt<dataType>& s)
};

#include"smart_ptr.cc"

#endif