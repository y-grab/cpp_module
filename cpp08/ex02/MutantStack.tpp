template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {};
		MutantStack(MutantStack const & src):std::stack<T>(src) {};
		~MutantStack() {
			this->c.clear();
		};
		MutantStack & operator=(MutantStack const & src) {
			if (src != *this) {
				this->c = src.c;
			}
			return *this;
		};
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
};