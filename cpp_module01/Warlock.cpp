#include "Warlock.hpp"

Warlock::Warlock(){};
Warlock::Warlock(Warlock &other)
{
	*this = other;
}
Warlock &Warlock::operator=(Warlock &other)
{
	_name = other._name;
	_title = other._title;
	return (*this);
}

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}
std::string const &Warlock::getName() const
{
	return (_name);
}

std::string const &Warlock::getTitle() const
{
	return (_title);
}

void Warlock::setTitle(std::string const &title)
{
	_title = title;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spellname)
{
	_spellBook[spellname->getName()] = spellname;
}

void Warlock::forgetSpell(std::string spellname)
{
	if (_spellBook.find(spellname) != _spellBook.end())
		_spellBook.erase(_spellBook.find(spellname));
}
void Warlock::launchSpell(std::string spellname, ATarget const &atarget)
{
	if (_spellBook.find(spellname) != _spellBook.end())
		_spellBook[spellname]->launch(atarget);
}
