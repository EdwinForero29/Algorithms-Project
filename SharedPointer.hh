#ifndef SharedPointer_hh
#define SharedPointer_hh 
#include<iostream>

template<typename dataType>
class SharedPointer{
public:
SharedPointer();
SharedPointer(dataType p);
~SharedPointer();
SharedPointer<dataType>& operator=(SharedPointer<dataType>& p);
SharedPointer<dataType>& operator=(nullptr_t);
void reset(dataType p) noexcept;
void swap(SharedPointer<dataType>& p);
dataType *get();
int use_count();
bool unique();
operator bool();

private:
dataType *pointer;
};

template<typename dataType>
bool operator==(const SharedPointer<dataType>& a, const SharedPointer<dataType>& b);

template<typename dataType>
bool operator!=(const SharedPointer<dataType>& a, const SharedPointer<dataType>& b);

template<typename dataType>
bool operator<(const SharedPointer<dataType>& a, const SharedPointer<dataType>& b);

template<typename dataType>
bool operator<=(const SharedPointer<dataType>& a, const SharedPointer<dataType>& b);

template<typename dataType>
bool operator>(const SharedPointer<dataType>& a, const SharedPointer<dataType>& b);

template<typename dataType>
bool operator>=(const SharedPointer<dataType>& a, const SharedPointer<dataType>& b);

template<typename dataType>
bool operator==(const SharedPointer<dataType>& a, nullptr_t) noexcept;

template<typename dataType>
bool operator!=(const SharedPointer<dataType>& a, nullptr_t) noexcept;

template<typename dataType>
bool operator<(const SharedPointer<dataType>& a, nullptr_t);

template<typename dataType>
bool operator<=(const SharedPointer<dataType>& a, nullptr_t);

template<typename dataType>
bool operator>(const SharedPointer<dataType>& a, nullptr_t);

template<typename dataType>
bool operator>=(const SharedPointer<dataType>& a, nullptr_t);

template<typename dataType>
bool operator==(nullptr_t, const SharedPointer<dataType>& a) noexcept;

template<typename dataType>
bool operator!=(nullptr_t, const SharedPointer<dataType>& a) noexcept;

template<typename dataType>
bool operator<(nullptr_t, const SharedPointer<dataType>& a);

template<typename dataType>
bool operator<=(nullptr_t, const SharedPointer<dataType>& a);

template<typename dataType>
bool operator>(nullptr_t, const SharedPointer<dataType>& a);

template<typename dataType>
bool operator>=(nullptr_t, const SharedPointer<dataType>& a);

template<typename dataType>
std::ostream& operator<<(std::ostream& o, const SharedPointer<dataType>& a)

template<typename dataType>
void swap(SharedPointer<dataType>& a, SharedPointer<dataType>& b) noexcept;

template<typename dataType, typename... Arguments>
SharedPointer<dataType> make_shared(Arguments&&... arguments);

#include"SharedPointer.cc"

#endif