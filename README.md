From https://nghiaho.com/?p=2355

###About the fork
I forked this project to adapt it to Windows.

###Introduction 

This is an implementation of the EKF localizationn with known correspondences from the book Probabilistic Robotics by Thrun et. al. I wrote this code to help me understand the material better. So others may find it useful as well.

The simulation consists of a robot with a range sensor that can detect known landmarks in the world. You move the robot around using the arrow keys.

One addition I made was handle the case when angular velocity is zero. The original algorithm found in the book would result in a divide by zero.

![ekf_localization](https://cloud.githubusercontent.com/assets/1471705/23337133/36ce48a4-fc38-11e6-952f-f79a08a3ccc1.png)

###Requirements
This demo code requires the following libraries
- SDL2
- Eigen

I've only tested this on a Linux machine but it should work on Mac and Windows because both libraries are cross platform.

###Compiling
```
mkdir build
cd build
cmake ..
make
```
###Customization
All the parameters for the simulation can be found in config.h
