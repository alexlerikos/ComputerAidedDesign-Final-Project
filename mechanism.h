#ifndef _mechanism_h_
#define _mechanism_h_

#include <linkage.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h>
#include <float.h>
#include <complex.h>
#include <chplot.h>

enum 
{
   SI,             //  SI units, use with uscUnit()
   USC,            //  USC units,  "    "    "
   LINK_1,         //  Link 2
   LINK_2,         //  Link 2
   LINK_3,         //  Link 3
   LINK_4,         //  Link 4
   LINK_5,         //  Link 5
   POINT_B,        //  Point C 
   POINT_C,        //  Point C 
   POINT_P,        //  Point C 
   POS,
   VEL,
   ACCEL,
};


/**********************************************
 * CMechanism class definition
 *********************************************/

class CMechanism
{
    private:
        // Private data members
        bool m_uscunit;          // unit choice

        double m_r[1:8];         // lengths of links
        double m_theta[1:8];     // phase angles for the links
        double m_omega[1:8];
        double m_alpha[1:8];

        double m_rp, m_beta;
        double complex Bp, Cp, Pp;
        double complex Bv, Cv, Pv;
        double complex Ba, Ca, Pa;


    
        // Private function members 
        void m_initialize(void);              // initialize private members
        void calcPosition(double theta2);     // calc. ang. pos. and m_r9
        void calcVelocity(double theta2, omega2);
        void calcAccel(double theta2, omega2, alpha2);




    public:
        // Constructor and Destructor
        CMechanism();
        ~CMechanism();

        // Setting information functions
        void setLinks(double r1, r2, r3, r4, r5, r7,rp, theta1, beta);
        void uscUnit(bool unit); 

        // Information for specified point or link
        double AngPosition(double theta2, int link);
        double AngVelocity(double theta2, omega2, int link);
        double AngAccel(double theta2, omega2, alpha2, int link);
        double complex Point(double theta2, omega2, alpha2, int prop, link);
        void plotSliderPos(CPlot *positionPlot);
    

};

#pragma importf <CMechanism.chf>

#endif
