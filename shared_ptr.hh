#ifndef shared_ptr_hh
#define shared_ptr_hh
#include"smart_ptr.hh"

template<typename dataType>
class shared_ptr : public smart_ptr<dataType>{
    public:

    /**
     * Default constructor for the shared pointer class
     * The pointer will be nullptr, and the count will be 0
     * Input: None
     * Output: None
     */
    shared_ptr();

    /**
     * Constructor with a raw pointer as a parameter
     * The shared pointers raw pointer will be set equal to the parameter, and the count will start on 0
     * Input: Raw pointer
     * Output: None
     */
    shared_ptr(dataType* p);

    /**
     * Copy constructor
     * Will increment by 1 the shared pointers count
     * Input: Shared pointer
     * Output: None
     */
    shared_ptr(const shared_ptr<dataType>& s);

    /**
     * Move constructor
     * Will increment by 1 the shared pointers count
     * Input: Shared pointer
     * Output: None
     */
    shared_ptr(shared_ptr<dataType>&& s);
    
    /**
     * Default destructor
     * If there are no more pointers pointing to the same object, it will be deleted. Else, the count will decrease by 1
     * Input: None
     * Output: None
     */
    ~shared_ptr();

    /**
     * Overload of the assignment operator, with an lvalue as a parameter
     * Will increment by 1 the shared pointers count
     * Input: Shared pointer
     * Output: Shared pointer(this)
     */
    shared_ptr& operator=(const shared_ptr<dataType>& s);

    /**
     * Overload of the assignment operator, with an rvalue as a parameter
     * Will increment by 1 the shared pointers count
     * Input: Shared pointer
     * Output: Shared pointer(this)
     */
    shared_ptr& operator=(shared_ptr<dataType>&& s);

    /**
     * Overload of the assignment operator, with a raw pointer as a parameter
     * The count will be set to 1
     * Input: Raw pointer
     * Output: Shared pointer(this)
     */
    shared_ptr& operator=(dataType* p);

    private:
    unsigned* count;

    /**
     * Method to copy a shared pointer to another
     * The pointers will share the raw pointer, and the count
     * Input: Shared pointer
     * Output: None
     */
    void copy(const shared_ptr<dataType>& s);
};

#include"shared_ptr.cc"
#endif