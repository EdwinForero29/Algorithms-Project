#ifdef smart_ptr_hh

template<typename dataType>
smart_ptr<dataType>::smart_ptr(){
    pointer = nullptr;
}

template<typename dataType>
smart_ptr<dataType>::smart_ptr(dataType* p){
    pointer = p;
}

template<typename dataType>
smart_ptr<dataType>::smart_ptr(const smart_ptr<dataType>& s){
    copy(s);
}

template<typename dataType>
smart_ptr<dataType>::smart_ptr(smart_ptr<dataType>&& s){
    s->pointer = this->pointer;
}

template<typename dataType>
smart_ptr<dataType>::~smart_ptr(){
    delete pointer;
}

template<typename dataType>
smart_ptr<dataType>& smart_ptr<dataType>::operator=(const smart_ptr<dataType>& s){
    copy(s);
    return *this;
}

template<typename dataType>
smart_ptr<dataType>& smart_ptr<dataType>::operator=(smart_ptr<dataType>&& s){
    this->pointer = s->pointer;
    return *this;
}

template<typename dataType>
dataType& smart_ptr<dataType>::operator*(){
    return *pointer;
}

template<typename dataType>
dataType* smart_ptr<dataType>::operator->(){
    return pointer;
}

template<typename dataType>
bool smart_ptr<dataType>::operator!(){
    return pointer == nullptr;
}

template<typename dataType>
bool smart_ptr<dataType>::operator==(const smart_prt<dataType>& s){
    return this->pointer == s->pointer;
}

template<typename dataType>
bool smart_ptr<dataType>::operator!=(const smart_prt<dataType>& s){
    return this->pointer != s->pointer
}

template<typename dataType>
bool smart_ptr<dataType>::operator==(const dataType*& p){
    return this->pointer == p;
}

template<typename dataType>
bool smart_ptr<dataType>::operator!=(const dataType*& p){
    return this->pointer != p;
}

template<typename dataType>
bool smart_ptr<dataType>::operator==(nullptr){
    return pointer == nullptr;
}

template<typename dataType>
bool smart_ptr<dataType>::operator!=(nullptr){
    return pointer != nullptr;
}

template<typename dataType>
void smart_ptr<dataType>::copy(const smart_ptr<dataType>& s){
    this->pointer = s->pointer;
}

#endif