#ifndef smart_ptr_hh
#define smart_ptr_hh

template<typename dataType>
class smart_ptr{
    public:

    /**
     * Default constructor for the smart pointer class
     * The pointer will be nullptr
     * Input: None
     * Output: None
     */
    smart_ptr();

    /**
     * Constructor with a raw pointer as a parameter
     * The smart pointers raw pointer will be set equal to the parameter
     * Input: Raw pointer
     * Output: None
     */
    smart_ptr(dataType* p);

    /**
     * Copy constructor
     * Input: Smart pointer
     * Output: None
     */
    smart_ptr(const smart_ptr<dataType>& s);

    /**
     * Move constructor
     * Input: Smart pointer
     * Output: None
     */
    smart_ptr(smart_ptr<dataType>&& s);
    
    /**
     * Default destructor
     * The pointer will be deleted
     * Input: None
     * Output: None
     */
    ~smart_ptr();

    /**
     * Overload of the assignment operator, with an lvalue as a parameter
     * Input: Smart pointer
     * Output: Smart pointer(this)
     */
    smart_ptr& operator=(const smart_ptr<dataType>& s);

    /**
     * Overload of the assignment operator, with an rvalue as a parameter
     * Input: Smart pointer
     * Output: Smart pointer(this)
     */
    smart_ptr& operator=(smart_ptr<dataType>&& s);

    /**
     * Overload of the assignment operator, with a raw pointer as a parameter
     * The smart pointers raw pointer will be set equal to the parameter
     * Input: Raw pointer
     * Output: Shared pointer(this)
     */
    smart_ptr& operator=(dataType* p);

    /**
     * Overload of the dereference operator
     * Input: None
     * Output: Pointers value
     */
    dataType& operator*();

    /**
     * Overload of the arrow operator
     * Input: None
     * Output: Raw pointer
     */
    dataType* operator->();

    /**
     * Returns true if the pointer is nullptr, false otherwise
     * Input: None
     * Output: Bool
     */
    bool operator!();

    /**
     * Returns true if the two pointers are equal, false otherwise
     * Input: Smart pointer
     * Output: Bool
     */
    bool operator==(const smart_ptr<dataType>& s);

    /**
     * Returns false if the two pointers are equal, true otherwise
     * Input: Smart pointer
     * Output: Bool
     */
    bool operator!=(const smart_ptr<dataType>& s);
    
    /**
     * Returns true if the two pointers are equal, false otherwise
     * Input: Smart pointer
     * Output: Bool
     */
    bool operator==(const dataType*& p);

    /**
     * Returns false if the two pointers are equal, true otherwise
     * Input: Smart pointer
     * Output: Bool
     */
    bool operator!=(const dataType*& p);
    
    protected:
    dataType* pointer;

    /**
     * Method to copy a smart pointer to anothe
     * The pointers will share the raw pointer
     * Input: Smart pointer
     * Output: None
     */
    void copy(const smart_ptr<dataType>& s);
};

#include"smart_ptr.cc"

#endif