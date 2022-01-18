#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
#include <deque>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public:
		MutantStack() : std::stack<T, Container>() {}
		virtual ~MutantStack() {}
		MutantStack(MutantStack const& src) : std::stack<T, Container>(src) {}
		MutantStack& operator=(MutantStack const& ref) {
			if (this != &ref)
				std::stack<T, Container>::operator=(ref);
			return *this;
		}
		

		typedef typename std::stack<T, Container>::container_type	container_type;
		typedef typename container_type::iterator					iterator;
		typedef typename container_type::reverse_iterator			reverse_iterator;

		iterator			begin() {
			return this->c.begin();
		}

		reverse_iterator	rbegin() {
			return this->c.rbegin();
		}

		iterator			end() {
			return this->c.end();
		}

		reverse_iterator	rend() {
			return this->c.rend();
		}
};

#endif
