#ifndef FRUIT_HPP
#define FRUIT_HPP

#include "Harvest.hpp"
#include "Tree_Fruits.hpp"


class Fruit: public Harvest {
public:
	Fruit():Harvest("fruit"){ }
	
private:
	void setName(const char *name) {
		Harvest::setName(name);
	}
};


#endif // !FRUIT_HPP