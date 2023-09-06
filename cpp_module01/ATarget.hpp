#ifndef ATarget_HPP
#define ATarget_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"
class ASpell;

class ATarget
{
protected:
	std::string _type;
	ATarget();
	ATarget(ATarget &other);
	ATarget & operator=(ATarget &other);

public:
	ATarget(std::string const & type);
	std::string const &getType() const;
	virtual ATarget *clone() const = 0;
	virtual ~ATarget();
	void getHitBySpell(ASpell const & aspell) const;
};

#endif
