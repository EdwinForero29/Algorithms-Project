#ifdef unique_ptr_hh

template<typename dataType>
unique_ptr<dataType>::unique_ptr(){
    this->pointer = nullptr;
}

template<typename dataType>
unique_ptr<dataType>::unique_ptr(dataType* p){
    this->pointer = p;
}

template<typename dataType>
unique_ptr<dataType>::unique_ptr(const unique_ptr<dataType>& s){
    copy(s);
}

template<typename dataType>
unique_ptr<dataType>::unique_ptr(unique_ptr<dataType>&& s){
    copy(s);
}

template<typename dataType>
unique_ptr<dataType>::~unique_ptr(){
    delete this->pointer;
    this->pointer = nullptr;
}

template<typename dataType>
unique_ptr<dataType>& unique_ptr<dataType>::operator=(const unique_ptr<dataType>& s){
    copy(s);
    return *this;
}

template<typename dataType>
unique_ptr<dataType>& unique_ptr<dataType>::operator=(unique_ptr<dataType>&& s){
    copy(s);
    return *this;
}

template<typename dataType>
void unique_ptr<dataType>::copy(unique_ptr<dataType>& s){
    this->pointer = s.pointer;
    s = nullptr;
}

#endif