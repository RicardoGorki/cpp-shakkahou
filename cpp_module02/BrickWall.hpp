#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include "ATarget.hpp"
class ATarget;

class BrickWall : public ATarget
{
public:
	BrickWall();
	~BrickWall();
	BrickWall* clone() const;
};

#endif
