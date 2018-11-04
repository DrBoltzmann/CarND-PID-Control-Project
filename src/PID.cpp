#include "PID.h"
#include <math.h>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;
  
  // initialize error variables to zero
  prev_cte = 0.0;
  
  p_error = 0.0;
  i_error = 0.0;
  d_error = 0.0;
}

void PID::UpdateError(double cte) {

  d_error = cte - prev_cte;
  p_error = cte;
  i_error += cte;
  prev_cte = cte;
}

double PID::TotalError() {
//  double steer = Kp * p_error + Kd * d_error + Ki * i_error;
//  return steer;
//  return Kp * p_error + Kd * d_error + Ki * i_error;
  return i_error;
}