#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>
class ASpell;
class ATarget;

class SpellBook
{
private:
	std::map<std::string, ASpell *> _spellBook;
	SpellBook(SpellBook &other);
	SpellBook &operator=(SpellBook &other);

public:
	SpellBook();
	~SpellBook();
	void learnSpell(ASpell *);
	void forgetSpell(std::string);
	ASpell *createSpell(std::string const &);
};

#endif
