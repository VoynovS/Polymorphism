#ifndef TREE_HPP
#define TREE_HPP

#include "Tree_Fruits.hpp"
#include "Conifers.hpp"
#include "Plant.hpp"





class Tree:public Tree_Fruits, public Conifers {
public:
	
	virtual void treee()const = 0;
	Tree(){

	}



	/*Tree():Plant("Tree", 10){ }
	Harvest::uPoiner harvest() {
		decreaseHarvest();
		return std::make_unique<>();
	}*/
};





#endif // !TREE_HPP