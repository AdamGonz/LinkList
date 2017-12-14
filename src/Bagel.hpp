/*
 * Bagel.hpp
 *
 *  Created on: Aug 30, 2017
 *      Author: adamgonzalez
 */

#ifndef BAGEL_HPP_
#define BAGEL_HPP_
#include <string>
class Bagel {
public:
	Bagel();
	virtual ~Bagel();
	std::string Flavor;
	int HoleSize;
	int Calories;
	float Price;
};

#endif /* BAGEL_HPP_ */
