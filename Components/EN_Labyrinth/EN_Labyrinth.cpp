/*!
 * \file
 * \brief
 */

#include <memory>
#include <string>

#include "EN_Labyrinth.hpp"
#include "Common/Logger.hpp"

namespace Processors {
namespace EN_Labyrinth {

EN_Labyrinth::EN_Labyrinth(const std::string & name) : Base::Component(name)
{
	LOG(LTRACE) << "Hello EN_Labyrinth\n";
}

EN_Labyrinth::~EN_Labyrinth()
{
	LOG(LTRACE) << "Good bye EN_Labyrinth\n";
}

bool EN_Labyrinth::onInit()
{
	LOG(LTRACE) << "EN_Labyrinth::initialize\n";

	// Register data streams, events and event handlers HERE!

	return true;
}

bool EN_Labyrinth::onFinish()
{
	LOG(LTRACE) << "EN_Labyrinth::finish\n";

	return true;
}

bool EN_Labyrinth::onStep()
{
	LOG(LTRACE) << "EN_Labyrinth::step\n";
	return true;
}

bool EN_Labyrinth::onStop()
{
	return true;
}

bool EN_Labyrinth::onStart()
{
	return true;
}

}//: namespace EN_Labyrinth
}//: namespace Processors
