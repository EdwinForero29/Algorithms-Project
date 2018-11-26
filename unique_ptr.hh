#ifndef unique_ptr_hh
#define unique_ptr_hh
#include"smart_ptr.hh"

template<typename dataType>
class unique_ptr : public smart_ptr<dataType>{
    public:
    unique_ptr();
    unique_ptr(dataType* p);
    unique_ptr(unique_ptr<dataType>&& s);
    ~unique_ptr();
    unique_ptr& operator=(unique_ptr<dataType>&& s);
    unique_ptr& operator=(dataType* p);

    private:
    unique_ptr(const unique_ptr<dataType>& s);
    unique_ptr& operator=(const unique_ptr<dataType>& s);
    void copy(const unique_ptr<dataType>& s);
};

#include"unique_ptr.cc"
#endif