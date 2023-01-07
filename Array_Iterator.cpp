
//Array_Iterator Constructor
template <typename T>
Array_Iterator<T>::Array_Iterator(Array <T> & a, int postfixExp):
	    a_ (a),
		cur_size_ (0),
		max_size_(postfixExp){}


//Array_Iterator Destructor
template <typename T>
Array_Iterator<T>::~Array_Iterator(void) {}


//Is iteration done?
template <typename T>
bool Array_Iterator<T>::is_done(void){
	return this->cur_size_ >= this->max_size_;
}

//Iterate to next location
template <typename T>
bool Array_Iterator<T>::advance(void) {
	++this->cur_size_;
	return true;
}

template <typename T>
T Array_Iterator<T>::operator * (void) {
	return this->a_.data_[this->cur_size_];
}

template <typename T>
T * Array_Iterator<T>::operator -> (void) {
	return &this->a_.data_(this->cur_size_);
}
