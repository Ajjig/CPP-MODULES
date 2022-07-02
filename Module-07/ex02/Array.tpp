

template < typename T >
Array< T >::Array( void ) {
    this -> _array = new T[0];
    this -> _length = 0;
}

template < typename T >
Array< T >::Array( unsigned int length ) {
    this -> _array = new T[length];
    bzero(this -> _array, length * sizeof(T));
    this -> _length = length;
}

template < typename T >
Array< T >::~Array( void ) {
    delete [] this -> _array;
}

template < typename T >
T & Array< T >::operator [] (int index) {
    if (index < 0 || index >= (int) this -> _length) {
        throw Array::IndexOutOfRangeException();
    }
    return this -> _array[index];
}

template < typename T >
const T & Array< T >::operator [] (int index) const {
    if (index < 0 || index >= (int) this -> _length) {
        throw Array::IndexOutOfRangeException();
    }
    return this -> _array[index];
}

template < typename T >
unsigned int Array< T >::size( void ) {
    return this -> _length;
}

template < typename T >
Array< T > & Array< T >::operator = (Array< T > & src) {
    if (this == &src)
        return *this;
    delete [] this -> _array;
    this -> _array = new T[src.size()];
    this -> _length = src.size();
    for (unsigned int i = 0; i < this -> _length; i++) {
        this -> _array[i] = src[i];
    }
    return *this;
}

template < typename T >
Array< T >::Array( Array< T > & src ) {
    this -> _array = new T[src.size()];
    this -> _length = src.size();
    for (unsigned int i = 0; i < this -> _length; i++) {
        this -> _array[i] = src[i];
    }
}
