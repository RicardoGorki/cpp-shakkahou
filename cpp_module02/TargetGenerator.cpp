#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {}
TargetGenerator::TargetGenerator(TargetGenerator &other)
{
	*this = other;
}
TargetGenerator &TargetGenerator::operator=(TargetGenerator &other)
{
	_target = other._target;
	return (*this);
}

void TargetGenerator::learnTargetType(ATarget *atarget)
{
	if (atarget)
		_target[atarget->getType()] = atarget;
}

void TargetGenerator::forgetTargetType(std::string const & targetName)
{
	if (_target.find(targetName) != _target.end())
		_target.erase(_target.find(targetName));
}

ATarget *TargetGenerator::createTarget(std::string const & targetName)
{
	ATarget * temp = NULL;
	if (_target.find(targetName) != _target.end())
		temp = _target[targetName];
	return (temp);
}
