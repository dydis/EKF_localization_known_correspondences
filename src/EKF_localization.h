#pragma once

#include <Eigen/Dense>
#include <vector>

#include "landmark.h"

class EKF_localization
{
public:
    EKF_localization();

    // v = velocity
    // w = yaw  velocity
    void update(double v, double w, const std::vector<Landmark> &landmarks, double dt);

    void set_state(double x, double y, double yaw);
    double x() { return m_mu(0); }
    double y() { return m_mu(1); }
    double yaw() { return m_mu(2); }

    void pose_ellipse(double &major, double &minor, double &theta);

private:
    void init_ekf();
    //void calc_error_ellipse();
    double constrain_angle(double radian);
    void ellipse(Eigen::MatrixXd X, double &major, double &minor, double &theta);

private:
    Eigen::Matrix<double, 3, 1> m_mu; // estimated state
    Eigen::Matrix<double, 3, 3> m_cov; // state covarianc

    double m_dt;

    // error ellipse for (x, y);
    double m_ellipse_major = 0.0;
    double m_ellipse_minor = 0.0;
    double m_ellipse_angle = 0.0;
};
