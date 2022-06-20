#pragma once
#include "Plant.hpp"
#include "Cones.hpp"
class Conifers: public Plant {
	
	public:
		Conifers() :Plant("Conifers", 19) { }
		Harvest::uPoiner harvest() {
			decreaseHarvest();
			return std::make_unique<Cones>();
		}
	};



