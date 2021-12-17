#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<class T>
class Array
{
	private:
		/*--------------------------Member variables--------------------------*/
		T *arr;
		unsigned int _size;

	public:
		/*----------------------------Coplien form----------------------------*/
		Array() {
			this->arr = NULL;
			this->_size = 0;
		};

		Array(const Array &ref) : arr(NULL) {
			*this = ref;
		};

		Array& operator=(const Array &ref) {
			if (this != &ref) {
				delete[] this->arr;
				this->arr = new T[ref.size()];
				for (unsigned int i = 0; i < ref.size(); i++)
						this->arr[i] = ref.arr[i];
				this->_size = ref._size;
			}
			
			return *this;
		};

		~Array() {
			delete[] arr;
		};

		/*--------------------------Member functions--------------------------*/
		Array(unsigned int n)
		{
			this->arr = new T[n];
			for (unsigned int i = 0; i < n; i++)
				this->arr[i] = T();
			this->_size = n;
		};

		T&	operator[](unsigned int index) {
			if (index > this->_size)
				throw Array::OutOfLimits;
			return (this->arr[index]);
		};

		unsigned int	size() const {
			return (this->_size);
		};

		/*--------------------------Exception Classes-------------------------*/
		class OutOfLimits : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Error: Out of limits";
			}
		} OutOfLimits;
};

#endif
