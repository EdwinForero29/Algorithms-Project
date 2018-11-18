#ifdef unique_ptr_hh

template<typename dataType>
unique_ptr<dataType>::unique_ptr(){
    pointer = nullptr;
}

template<typename dataType>
unique_ptr<dataType>::unique_ptr(dataType* p){
    pointer = p;
}

template<typename dataType>
unique_ptr<dataType>::unique_ptr(const unique_ptr<dataType>& s){
    copy(s);
    delete s;
}

template<typename dataType>
unique_ptr<dataType>::unique_ptr(unique_ptr<dataType>&& s){
    copy(s);
}

template<typename dataType>
unique_ptr<dataType>::~unique_ptr(){
    pointer = nullptr;
}

template<typename dataType>
unique_ptr<dataType>& unique_ptr<dataType>::operator=(const unique_ptr<dataType>& s){
    copy(s);
    delete s;
    return *this;
}

template<typename dataType>
unique_ptr<dataType>& unique_ptr<dataType>::operator=(unique_ptr<dataType>&& s){
    copy(s);
    return *this;
}

#endif