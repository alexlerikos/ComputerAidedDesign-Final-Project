/* Testing Program */

#include "mechanism.h"

int main()
{
   class CMechanism cm;
   double output;

   bool unit = SI;
   double r1 = 5.0, 
          r2 = 1.0,     
          r3 = 3.0, 
          r4 = 4.5, 
          r5 = 8.0,
          r7 = 3.0,
          rp = 2.0;
   
   double theta1 = deg2rad( 10);
   
   double theta2 = deg2rad(-30);
   double omega2 = 15.0;
   double alpha2 = 0;
   
   double beta = deg2rad(30);

   cm.uscUnit(unit);
   cm.setLinks(r1, r2, r3, r4, r5, r7, rp, theta1, beta);

/* Calculations */

    printf("Theta 1 = %f (rad)\n", cm.AngPosition(theta2, LINK_1));   
    printf("Theta 2 = %f (rad)\n", cm.AngPosition(theta2, LINK_2));
    printf("Theta 3 = %f (rad)\n", cm.AngPosition(theta2, LINK_3));
    printf("Theta 4 = %f (rad)\n", cm.AngPosition(theta2, LINK_4));
    printf("Theta 5 = %f (rad)\n\n", cm.AngPosition(theta2, LINK_5));
    
    printf("Point B = %f \n", cm.Point(theta2, omega2, alpha2, POS, POINT_B));
    printf("Point C = %f \n", cm.Point(theta2, omega2, alpha2, POS, POINT_C));
    printf("Point P = %f \n\n", cm.Point(theta2, omega2, alpha2, POS, POINT_P));
    
    printf("Omega 1 = %f (rad/s)\n", cm.AngVelocity(theta2, omega2, LINK_1));   
    printf("Omega 2 = %f (rad/s)\n", cm.AngVelocity(theta2, omega2, LINK_2));
    printf("Omega 3 = %f (rad/s)\n", cm.AngVelocity(theta2, omega2, LINK_3));
    printf("Omega 4 = %f (rad/s)\n", cm.AngVelocity(theta2, omega2, LINK_4));    
    printf("Omega 5 = %f (rad/s)\n\n", cm.AngVelocity(theta2, omega2, LINK_5)); 
    
    printf("Point B = %f \n", cm.Point(theta2, omega2, alpha2, VEL, POINT_B));
    printf("Point C = %f \n", cm.Point(theta2, omega2, alpha2, VEL, POINT_C));
    printf("Point P = %f \n\n", cm.Point(theta2, omega2, alpha2, VEL, POINT_P));

    printf("Alpha 1 = %f (rad/s^2)\n", cm.AngAccel(theta2, omega2, alpha2, LINK_1));   
    printf("Alpha 2 = %f (rad/s^2)\n", cm.AngAccel(theta2, omega2, alpha2, LINK_2));
    printf("Alpha 3 = %f (rad/s^2)\n", cm.AngAccel(theta2, omega2, alpha2, LINK_3));
    printf("Alpha 4 = %f (rad/s^2)\n", cm.AngAccel(theta2, omega2, alpha2, LINK_4));  
    printf("Alpha 5 = %f (rad/s^2)\n\n", cm.AngAccel(theta2, omega2, alpha2, LINK_5));
    
    printf("Point B = %f \n", cm.Point(theta2, omega2, alpha2, ACCEL, POINT_B));
    printf("Point C = %f \n", cm.Point(theta2, omega2, alpha2, ACCEL, POINT_C));
    printf("Point P = %f \n\n", cm.Point(theta2, omega2, alpha2, ACCEL, POINT_P));
    
    cm.plotSliderPos();

    printf("Done!\n");

    return 0;
}
