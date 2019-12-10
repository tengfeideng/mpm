#include "particle.h"
#include "factory.h"
#include "particle_base.h"

// Particle2D (2 Dim)
static Register<mpm::ParticleBase<2>, mpm::Particle<2>, mpm::Index,
                const Eigen::Matrix<double, 2, 1>&>
    particle2d("P2D");

// Particle3D (3 Dim)
static Register<mpm::ParticleBase<3>, mpm::Particle<3>, mpm::Index,
                const Eigen::Matrix<double, 3, 1>&>
    particle3d("P3D");

// Particle2D (2 Dim, 2 Phase)
static Register<mpm::ParticleBase<2>, mpm::Particle<2, 2>, mpm::Index,
                const Eigen::Matrix<double, 2, 1>&>
    particle2d2phase("P2D2PHASE");

// Particle3D (3 DoF, 2 Phase)
static Register<mpm::ParticleBase<3>, mpm::Particle<3, 2>, mpm::Index,
                const Eigen::Matrix<double, 3, 1>&>
    particle3d2phase("P3D2PHASE");
