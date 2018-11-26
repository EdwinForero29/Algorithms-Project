#ifndef unique_ptr_hh
#define unique_ptr_hh
#include"smart_ptr.hh"

template<typename dataType>
class unique_ptr : public smart_ptr<dataType>{
    public:

    /**
     * Default constructor for the unique pointer class
     * The pointer will be nullptr
     * Input: None
     * Output: None
     */
    unique_ptr();

    /**
     * Constructor with a raw pointer as a parameter
     * The unique pointers raw pointer will be set equal to the parameter
     * Input: Raw pointer
     * Output: None
     */
    unique_ptr(dataType* p);

    /**
     * Move constructor
     * The parameter will point to nullptr
     * Input: Unique pointer
     * Output: None
     */
    unique_ptr(unique_ptr<dataType>&& s);

    /**
     * Default destructor
     * The pointer will be deleted
     * Input: None
     * Output: None
     */
    ~unique_ptr();

    /**
     * Overload of the assignment operator, with an rvalue as a parameter
     * The parameter will point to nullptr
     * Input: Shared pointer
     * Output: Shared pointer(this)
     */
    unique_ptr& operator=(unique_ptr<dataType>&& s);

    private:

    /**
     * Move constructor. Shall not be used by the client
     * Input: Shared pointer
     * Output: None
     */
    unique_ptr(const unique_ptr<dataType>& s);

    /**
     * Overload of the assignment operator, with an lvalue as a parameter. Shall not be used by the client
     * Input: Unique pointer
     * Output:Unique pointer(this)
     */
    unique_ptr& operator=(const unique_ptr<dataType>& s);

    /**
     * Method to copy a unique pointer to another
     * The parameter will point to nullptr
     * Input: Unique pointer
     * Output: None
     */
    void copy(unique_ptr<dataType>& s);
};

#include"unique_ptr.cc"
#endif