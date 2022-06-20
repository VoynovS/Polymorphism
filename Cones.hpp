#pragma once
#include "Conifers.hpp"


class Cones : public Harvest {
public:
	Cones() :Harvest("Cones") { }
	
private:
	void setName(const char* name) {
		Harvest::setName(name);
	}
};

