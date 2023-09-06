#include "ASpell.hpp"

ASpell::ASpell() {}
ASpell::ASpell(ASpell &other)
{
	*this = other;
}

ASpell &ASpell::operator=(ASpell &other)
{
	_name = other._name;
	_effects = other._effects;
	return (*this);
}

ASpell::ASpell(std::string const &name, std::string const &effects) : _name(name), _effects(effects)
{

}
std::string const &ASpell::getName() const
{
	return (_name);
}

std::string const &ASpell::getEffects() const
{
	return (_effects);
}

ASpell::~ASpell(){}

void ASpell::launch(ATarget const &atarget)
{
	atarget.getHitBySpell(*this);
}
