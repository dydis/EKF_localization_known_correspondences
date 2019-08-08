#pragma once

#include "landmark.h"

// All metric units are in pixels.

// world settings
static const int WORLD_WIDTH = 600;
static const int WORLD_HEIGHT= 600;

static const int BOUNDARY_X1 = 50;
static const int BOUNDARY_X2 = 550;
static const int BOUNDARY_Y1 = 50;
static const int BOUNDARY_Y2 = 550;

static const Landmark LANDMARKS[] = {
    // (x, y, red, green, blue)
    {100, 100, 1, 0, 0},
    {WORLD_WIDTH - 100, 100, 1, 0, 0},
    {WORLD_WIDTH - 100, WORLD_HEIGHT - 100, 1, 0,  0},
    {100, WORLD_HEIGHT - 100, 1, 0,  0},
    {50, 50, 1, 0, 0},
    {75, 200, 1, 0, 0},
    {250, 30, 1, 0,  0},
    {WORLD_WIDTH/2 - 50, WORLD_WIDTH / 2 - 10, 1, 0, 0},
    {WORLD_WIDTH / 2 + 20, WORLD_WIDTH / 2 + 5, 1, 0, 0},
	{WORLD_WIDTH / 2 + 15, WORLD_WIDTH / 2 - 105, 1, 0, 0},
	{WORLD_WIDTH / 2 - 15, WORLD_WIDTH / 2 + 65, 1, 0, 0},
	{WORLD_WIDTH / 2 + 55, WORLD_WIDTH / 2, 1, 0, 0},
	{WORLD_WIDTH / 2 - 15, WORLD_WIDTH / 2 - 245, 1, 0, 0},
	{WORLD_WIDTH / 2 - 65, WORLD_WIDTH / 2 - 195, 1, 0, 0},
};

// motion noise parameters
// velocity_noise          = alpha1*|velocity| + alpha2*|angular_velocity|
// angular_velocity_noise  = alpha3*|velocity| + alpha4*|angular_velocity|
static const double ALPHA1 = 0.1;
static const double ALPHA2 = 0;
static const double ALPHA3 = 0.01;
static const double ALPHA4 = 0.1;

// robot motion properties
static const double ROBOT_VEL = 100; // pixels/sec
static const double ROBOT_YAW_VEL = 60*M_PI/180; // rad/sec

// properties of the robot's sensor
static const double FOV = 45*M_PI/180;
static const double DETECTION_RANGE = 200;
static const double DETECTION_RANGE_ALPHA = 0.1;
static const double DETECTION_ANGLE_SIGMA = 2*M_PI/180;

// 99% confidence ellipse for 2 dimensions
static const double ELLIPSE_SCALE = 3.0348;
