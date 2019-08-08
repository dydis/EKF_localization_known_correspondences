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
    SDL2 zip should be downloaded and placed in a specific folder (Tools in my case) (https://www.libsdl.org/release/SDL2-devel-2.0.10-VC.zip)
    
    When CMake asks for SDL2_DIR, just point at W:\Tools\SDL\SDL2-2.0.10

- Eigen
    Eigen should be downloaded and placed in a specific folder (Tools in my case) (http://bitbucket.org/eigen/eigen/get/3.3.7.zip)
    Eigen path is : W:\Tools\Eigen\eigen-3.3.7
    Environment variable EIGEN3_INCLUDE_DIR should be set to Eigen path:
        setx EIGEN3_INCLUDE_DIR "W:\Tools\Eigen\eigen-3.3.7"

Then you simply use CMake to get Visual project.

###Compiling

###Customization
All the parameters for the simulation can be found in config.h
