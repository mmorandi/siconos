/* Siconos is a program dedicated to modeling, simulation and control
 * of non smooth dynamical systems.
 *
 * Copyright 2024 INRIA.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
*/

#ifndef Contact5DR_hpp
#define Contact5DR_hpp

#include "MechanicsFwd.hpp"
#include "SiconosVector.hpp"
#include "NewtonEuler5DR.hpp"

class Contact5DR : public NewtonEuler5DR
{
private:

  ACCEPT_SERIALIZATION(Contact5DR);

public:
  Contact5DR();

  /* For users that may require extra information about contacts. */
  SP::BodyShapeRecord bodyShapeRecordA;
  SP::BodyShapeRecord bodyShapeRecordB;


  /**
     to compute the output y = h(t,q) of the Relation
     
     \param time current time value
     \param q coordinates of the dynamical systems involved in the relation
     \param y the resulting vector
  */
  void computeh(double time, const BlockVector& q0, SiconosVector& y) override;

  /** Update this contact point information.
   * 
   *  \param pos1 Position on ds1 in ds1 frame.
   *  \param pos2 Position on ds2 in ds2 frame (or world frame if ds2=null).
   *  \param normal Normal in ds2 frame (or world frame if ds2=null).
   */
  virtual void updateContactPoints(const SiconosVector& pos1,
                                   const SiconosVector& pos2,
                                   const SiconosVector& normal);

  virtual void preDelete() {}

  ACCEPT_STD_VISITORS();
};

#endif
