Solid Mechanics - Finite Volume Solvers
=======================================

The included solid mechanics solvers employ the finite volume method
(not finite elements) to numerically approximate the displacements
and stresses in solid bodies undergoing deformation.

The included solvers are suitable for small strain, small strain with
large rotations, large strain, cohesive zones, plasticity, thermal-
elasticity, visco-elasticity, gravity forces, fluid-structure
interactions, multi-material analyses and contact stress analysis.

A number of custom boundary conditions with full non-orthogonal correction
are including time-varying displacements and tractions, fixed rotations,
and fixed displacements with zero shear stress.

A number of people have contributed to the development of the solvers,
mainly within Alojz Ivankovic's research group. The main contributors are:
Aleksandar Karac, Zeljko Tukovic, Hrvoje Jasak, Philip Cardiff, Declan Carolan,
Michael Leonard and Valentine Kanyanta.

The solvers have been assembled and are maintained by Philip Cardiff,
University College Dublin.

Have fun.


Notes for OpenFOAM-2.2.0
------------------------

Disabled capabilities for compilation:
   - solidInterface because of faMesh
   - ggiInterpolation option in contact boundaries
   - fixedRotation boundary condition because of RodriguesRotation
   - finiteElement mesh motion in FSI solver

   
Further modifications
=====================

Original source came from here: http://www.cfd-online.com/Forums/openfoam-news-announcements-other/106881-solid-mechanics-solvers-added-openfoam-extend-4.html#post432903

Further modificiations made by Bruno Santos <wyldckat@github>:
   - Moved solvers to their own folder.
   - Simplified Allw* scripts, since this way we can use the multi-core building ability that OpenFOAM has got.
   - Using "realpath" as a compatibility measure with compiling on Windows (blueCFD).
   - Created branches for each one of the latest OpenFOAM git versions: OF22x OF21x OF20x

Further modificiations made by Bruno Santos <wyldckat@github> for blueCFD:
   - Adapted the source code to build on blueCFD 2.1-2 and 2.0-3.


Building on blueCFD 2.1-2 and 2.0-3
===================================

Using Git
---------

You need to have [MSys+Git](http://msysgit.github.io/) installed, in order to use Git on Windows.

  1. Go to your user folder:

     ```
     mkdir -p $FOAM_RUN
     cd $FOAM_RUN/..
     ```

  2. Clone the repository and go into the cloned repository:

     ```
     git clone https://github.com/blueCFD/solidMechanics.git
     cd solidMechanics
     ```

  3. Checkout the repository respective to the version of OpenFOAM you are using:

   * blueCFD 2.1-2:

     ```
     git checkout blueCFD-2.1-2
     ```

   * blueCFD 2.0-3 (should also work on blueCFD 2.0-2):

     ```
     git checkout blueCFD-2.0-3
     ```

   4. Build all of the libraries and utilities by running:

     ```
     ./Allwmake
     ```

   5. The tutorials are available at the folder `tutorials`.


Using Zip
---------

  1. Go to your user folder:

     ```
     mkdir -p $FOAM_RUN
     cd $FOAM_RUN/..
     ```

  2. Get the Zip file for the repository respective to the version of blueCFD you are using:

   * blueCFD 2.1-2:

     ```
     wget https://github.com/blueCFD/solidMechanics/archive/blueCFD-2.1-2.zip
     ```

   * blueCFD 2.0-3:

     ```
     wget https://github.com/blueCFD/solidMechanics/archive/blueCFD-2.0-3.zip
     ```

   3. Unzip the respective file and go into the respective folder, for example:

     ```
     unzip blueCFD-2.1-2.zip
     cd solidMechanics-blueCFD-2.1-2
     ```
     
   4. Build all of the libraries and utilities by running:

     ```
     ./Allwmake
     ```

   5. The tutorials are available at the folder `tutorials`.




License
=======

The same as OpenFOAM(R), namely GNU GPL v3.

