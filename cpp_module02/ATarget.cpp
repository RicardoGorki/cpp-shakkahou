#include "ATarget.hpp"

ATarget::ATarget(){}
ATarget::ATarget(ATarget &other)
{
	*this = other;
}
ATarget &ATarget::operator=(ATarget &other)
{
	_type = other._type;
	return (*this);
}

ATarget::ATarget(std::string const &type) : _type(type)
{

}

std::string const &ATarget::getType() const
{
	return (_type);
}

ATarget::~ATarget()
{

}
void ATarget::getHitBySpell(ASpell const &aspell) const
{
	std::cout << _type << " has been " << aspell.getEffects() << "!" << std::endl;
}
