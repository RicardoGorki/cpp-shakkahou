#include "SpellBook.hpp"

SpellBook::SpellBook(SpellBook &other)
{
	_spellBook = other._spellBook;
}
SpellBook &SpellBook::operator=(SpellBook &other)
{
	_spellBook = other._spellBook;
	return (*this);
}

SpellBook::SpellBook() {}
SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell *spellname)
{
	_spellBook[spellname->getName()] = spellname;
}

void SpellBook::forgetSpell(std::string spellname)
{
	if (_spellBook.find(spellname) != _spellBook.end())
		_spellBook.erase(_spellBook.find(spellname));
}

ASpell *SpellBook::createSpell(std::string const &spellname)
{
	ASpell *temp = NULL;
	if (_spellBook.find(spellname) != _spellBook.end())
		temp = _spellBook[spellname];
	return (temp);
}
