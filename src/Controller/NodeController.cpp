/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: thod0127
 */

#include "NodeController.h";
#include <iostream>;
using namespace std;

NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
	notHipDoubles = new CTECArray<double>(4);


}

NodeController::~NodeController()
{

}

void NodeController :: start()
{

	arrayTimer.startTimer();
	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		notHipsterInts->set(index, (index * 23));

	}
	for (int index = notHipsterInts->getSize()-1; index >= 0; index--)
	{
		cout << "The contents of the notHipsterInts array node " << index << " are: " << notHipsterInts->get(index) << endl;
	}
	for(int index = 0; index < notHipDoubles->getSize(); index ++)
	{
		notHipDoubles->set(index , (index + 8));
	}
	for(int index = notHipDoubles->getSize() - 1; index >= 0; index--)
	{
		cout << "Contents of notHipDoubles " << index << " are: " << notHipDoubles->get(index) <<endl;
	}
	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation
}

