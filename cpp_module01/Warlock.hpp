#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
class ASpell;

class Warlock
{
private:
	std::string _name;
	std::string _title;
	Warlock();
	Warlock(Warlock &other);
	Warlock &operator=(Warlock &other);
	std::map<std::string, ASpell*> _spellBook;

public:
	Warlock(std::string const &name, std::string const &title);
	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(std::string const &title);
	~Warlock();
	void introduce() const;
	void learnSpell(ASpell* spellname);
	void forgetSpell(std::string spellname);
	void launchSpell(std::string spellname, ATarget const &atarget);
};

#endif
