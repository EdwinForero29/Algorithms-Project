#ifndef UniquePointer_hh
#define UniquePointer_hh 
#include<iostream>

template<typename dataType>
class UniquePointer{
public:
UniquePointer();
UniquePointer(dataType p);
~UniquePointer();
UniquePointer<dataType>& operator=(UniquePointer<dataType>& p);
UniquePointer<dataType>& operator=(nullptr_t);
dataType *release() noexcept;
void reset(dataType p) noexcept;
void swap(UniquePointer<dataType>& p);
dataType *get();
operator bool();

private:
dataType *pointer;
};

template<typename dataType>
bool operator==(const UniquePointer<dataType>& a, const UniquePointer<dataType>& b);

template<typename dataType>
bool operator!=(const UniquePointer<dataType>& a, const UniquePointer<dataType>& b);

template<typename dataType>
bool operator<(const UniquePointer<dataType>& a, const UniquePointer<dataType>& b);

template<typename dataType>
bool operator<=(const UniquePointer<dataType>& a, const UniquePointer<dataType>& b);

template<typename dataType>
bool operator>(const UniquePointer<dataType>& a, const UniquePointer<dataType>& b);

template<typename dataType>
bool operator>=(const UniquePointer<dataType>& a, const UniquePointer<dataType>& b);

template<typename dataType>
bool operator==(const UniquePointer<dataType>& a, nullptr_t) noexcept;

template<typename dataType>
bool operator!=(const UniquePointer<dataType>& a, nullptr_t) noexcept;

template<typename dataType>
bool operator<(const UniquePointer<dataType>& a, nullptr_t);

template<typename dataType>
bool operator<=(const UniquePointer<dataType>& a, nullptr_t);

template<typename dataType>
bool operator>(const UniquePointer<dataType>& a, nullptr_t);

template<typename dataType>
bool operator>=(const UniquePointer<dataType>& a, nullptr_t);

template<typename dataType>
bool operator==(nullptr_t, const UniquePointer<dataType>& a) noexcept;

template<typename dataType>
bool operator!=(nullptr_t, const UniquePointer<dataType>& a) noexcept;

template<typename dataType>
bool operator<(nullptr_t, const UniquePointer<dataType>& a);

template<typename dataType>
bool operator<=(nullptr_t, const UniquePointer<dataType>& a);

template<typename dataType>
bool operator>(nullptr_t, const UniquePointer<dataType>& a);

template<typename dataType>
bool operator>=(nullptr_t, const UniquePointer<dataType>& a);

template<typename dataType>
std::ostream& operator<<(std::ostream& o, const UniquePointer<dataType>& a)

template<typename dataType>
void swap(UniquePointer<dataType>& a, UniquePointer<dataType>& b) noexcept;

template<typename dataType, typename... Arguments>
UniquePointer<dataType> make_unique(Arguments&&... arguments);

#include"UniquePointer.cc"

#endif