# Dynamic State Estimation
ROB530 Project Winter 2021

In this project we implement and compare several types of algorithms for state estimation of the Cassie robot from Agility Robotics. 

### QP Estimators

Formulating state estimation as an optimization problem that can be solved with Quadratic Programming (QP) makes it easy to handle equality and 
inequality constraints on the dynamical system. We provide an implementation of [\[1\]](https://ieeexplore.ieee.org/document/6942679) adapted for the 
Cassie robot under **QPv1**.

We also derive a second QP formulation from the Cassie dynamics model using a different state vector formulation and implement it, under **QPv3**. 

### EKF as MAP problem with holonomic constraints eliminated

We obtain the dynamics of the base link by eliminating the ground-reaction forces via SVD. 

### Baseline InEKF Estimators

Finally, we implement the state-of-the-art Invariant EKF for the Cassie robot[[2]]([[2104.04238\] Legged Robot State Estimation in Slippery Environments Using Invariant Extended Kalman Filter with Velocity Update (arxiv.org)](https://arxiv.org/abs/2104.04238)) for provide a baseline comparison for the performance of our estimators under **InEKF_IMU_Kin.m**.

## Getting Started

Requirements
* MATLAB with MATLAB Coder and Optimization Toolboxes installed
* C compiler (if running on Linux or Mac)

Cassie Dynamics are provided in the form of pre-compiled Mex files. These files are compiled for Windows, so they must be recompiled to run on Mac or Linux.
The C source files are also included in the repository.


