#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(const AMateria &ref)
{
	*this = ref;
}

AMateria& AMateria::operator=(const AMateria &ref)
{
	if (this != &ref)
	{
		this->_type = ref._type;
	}
	return *this;
}

AMateria::AMateria(std::string const & type) : _type(type){}

std::string const& AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
