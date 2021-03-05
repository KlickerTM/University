#include "Class.h"

template my_class<int>;
template my_class<double>;

template <typename T> void my_class<T>::set(T key) { this->key = key; }
template <typename T> T my_class<T>::get() { return this->key; }
template <typename T> void my_class<T>::INFO() { cout << "Число: " << this->key << endl; }
template <typename T> my_class<T>::my_class(T key) { this->key = key; }