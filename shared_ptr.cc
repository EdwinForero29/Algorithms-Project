#ifdef shared_ptr_hh

template<typename dataType>
shared_ptr<dataType>::shared_ptr(){
    this->pointer = nullptr;
    count = new unsigned;
}

template<typename dataType>
shared_ptr<dataType>::shared_ptr(dataType* p){
    this->pointer = p;
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
    if(*count == 1) delete this->pointer;
    (*count)--;
    this->pointer = nullptr;
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
shared_ptr<dataType>& shared_ptr<dataType>::operator=(dataType* p){
    this->pointer = p;
    count = new unsigned;
    *count = 1;
    return *this;
}

template<typename dataType>
void shared_ptr<dataType>::copy(const shared_ptr<dataType>& s){
    this->pointer = s.pointer;
    this->count = s.count;
    if(this->pointer != nullptr) (*count)++;
}

#endif