#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"
class ATarget;

class ASpell
{
protected:
	std::string _name;
	std::string _effects;
	ASpell();
	ASpell(ASpell &other);
	ASpell & operator=(ASpell &other);

public:
	ASpell(std::string const & name, std::string const &effects);
	std::string const &getName() const;
	std::string const &getEffects() const;
	virtual ASpell *clone() const = 0;
	virtual ~ASpell();
	void launch(ATarget const &atarget);
};

#endif
