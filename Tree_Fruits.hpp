#pragma once
#include "Plant.hpp"
#include "Fruit.hpp"
class Tree_Fruits: public Plant {
public:
	Tree_Fruits() :Plant("Tree_Fruits", 10) { }
	Harvest::uPoiner harvest() {
		decreaseHarvest();
		return std::make_unique<Fruit>();
	}
};




