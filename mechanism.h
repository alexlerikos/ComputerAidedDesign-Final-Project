/************************************************************
 * File name: mechanism.h
 *            header file for class CMechanism
 ************************************************************/

#ifndef _MECHANISM_H_
#define _MECHANISM_H_

#include <linkage.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h>
#include <float.h>
#include <complex.h>
#include <chplot.h>


/**********************************************
 * CMechanism class definition
 *********************************************/

class CMechanism
{

	public:

	//public attributes



	

	// Constructor/Destructor
    CMechanism();
    ~CMechanism();


	//public member functions
	void uscUnit(bool unit);
    void setLinks();
    double position();
    double velocity();
    double acceleration();
    void plotSliderPos();
    void plotSliderVel();
    void animation();


	private:

	//private attributes
	bool m_uscunit;          // unit choice

	double r_length[1:8]; // array containing length of members 1:8
	double theta[1:5]; //array containing beam phase angles 1:5


	//private member functions	


}