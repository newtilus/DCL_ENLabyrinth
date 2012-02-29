/*!
 * \file
 * \brief
 */

#ifndef EN_LABYRINTH_HPP_
#define EN_LABYRINTH_HPP_

#include "Component_Aux.hpp"
#include "Component.hpp"
#include "Panel_Empty.hpp"
#include "DataStream.hpp"

namespace Processors {
namespace EN_Labyrinth {

/*!
 * \class EN_Labyrinth
 * \brief EN_Labyrinth processor class.
 */
class EN_Labyrinth: public Base::Component
{
public:
	/*!
	 * Constructor.
	 */
	EN_Labyrinth(const std::string & name = "");

	/*!
	 * Destructor
	 */
	virtual ~EN_Labyrinth();


protected:

	/*!
	 * Connects source to given device.
	 */
	bool onInit();

	/*!
	 * Disconnect source from device, closes streams, etc.
	 */
	bool onFinish();

	/*!
	 * Retrieves data from device.
	 */
	bool onStep();

	/*!
	 * Start component
	 */
	bool onStart();

	/*!
	 * Stop component
	 */
	bool onStop();

};

}//: namespace EN_Labyrinth
}//: namespace Processors


/*
 * Register processor component.
 */
REGISTER_PROCESSOR_COMPONENT("EN_Labyrinth", Processors::EN_Labyrinth::EN_Labyrinth, Common::Panel_Empty)

#endif /* EN_LABYRINTH_HPP_ */
