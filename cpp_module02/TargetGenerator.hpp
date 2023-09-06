#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <map>
#include "ATarget.hpp"
class ATarget;

class TargetGenerator
{
private:
	std::map<std::string, ATarget *> _target;
	TargetGenerator &operator=(TargetGenerator &other);
	TargetGenerator(TargetGenerator &other);
public:
	TargetGenerator();
	~TargetGenerator();
	void learnTargetType(ATarget*);
	void forgetTargetType(std::string const &);
	ATarget* createTarget(std::string const &);
};

#endif
