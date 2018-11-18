#ifdef shared_ptr_hh

template<typename dataType>
shared_ptr<dataType>::shared_ptr(){
    pointer = nullptr;
    count = new unsigned;
    *count = 1;
}

template<typename dataType>
shared_ptr<dataType>::shared_ptr(dataType* p){
    pointer = p;
    count = new unsigned;
    *count = 1;
}

template<typename dataType>
shared_ptr<dataType>::shared_ptr(const shared_ptr<dataType>& s){
    copy(s);
}

template<typename dataType>
shared_ptr<dataType>::shared_ptr(shared_ptr<dataType>&& s){
    copy(s);
}

template<typename dataType>
shared_ptr<dataType>::~shared_ptr(){
    pointer = nullptr;
    (*count)--;
    count = nullptr;
}

template<typename dataType>
shared_ptr<dataType>& shared_ptr<dataType>::operator=(const shared_ptr<dataType>& s){
    copy(s);
    return *this;
}

template<typename dataType>
shared_ptr<dataType>& shared_ptr<dataType>::operator=(shared_ptr<dataType>&& s){
    copy(s);
    return *this;
}

template<typename dataType>
void smart_ptr<dataType>::copy(const smart_ptr<dataType>& s){
    this->pointer = s.pointer;
    this->count = s.count;
    if(this->pointer != nullptr) (*count)++;
}

#endif