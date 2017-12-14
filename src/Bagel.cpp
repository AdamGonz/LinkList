/*
 * Bagel.cpp
 *
 *  Created on: Aug 30, 2017
 *      Author: adamgonzalez
 */

#include "Bagel.hpp"
#include "utilities.hpp"

Bagel::Bagel() {
	// TODO Auto-generated constructor stub
	Flavor = getRandomString(4,5);
	HoleSize = getRandomInt(1,4);
	Calories = getRandomInt(1,150);
	Price = getRandomDouble(1,5,2);

}


Bagel::~Bagel() {
	// TODO Auto-generated destructor stub
    cout << Flavor << "Being Deleted" << endl;
    cout << "\n";
}
