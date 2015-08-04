/* Siconos-Kernel, Copyright INRIA 2005-2012.
 * Siconos is a program dedicated to modeling, simulation and control
 * of non smooth dynamical systems.
 * Siconos is a free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * Siconos is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Siconos; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * Contact: Vincent ACARY, siconos-team@lists.gforge.inria.fr
 */
#include "TimeDiscretisation.hpp"
#include "RuntimeException.hpp"
#include "Tools.hpp"
#include <cmath>

TimeDiscretisation::TimeDiscretisation()
{
  mpf_init(_hgmp);
  mpf_init(_tkp1); 
  mpf_init(_tk); 
  mpf_init(_t0gmp);
}

// --- Straightforward constructors ---

TimeDiscretisation::TimeDiscretisation(const TkVector& tk):
  _h(0.0)
{
  mpf_init(_hgmp);
  mpf_init(_tkp1); 
  mpf_init(_tk); 
  mpf_init(_t0gmp);

  _tkV = tk;
  _t0 = _tkV.at(0);
}

// INPUTS: t0 and h
TimeDiscretisation::TimeDiscretisation(double t0, double h):
  _h(h), _t0(t0)
{
  mpf_init(_hgmp);
  mpf_init(_tkp1); 
  mpf_init(_tk); 
  mpf_init(_t0gmp);

}

// INPUTS: t0 and h
TimeDiscretisation::TimeDiscretisation(double t0, const std::string& str): _t0(t0)
{
  mpf_init(_hgmp);
  mpf_init(_tkp1);
  mpf_init(_tk);
  mpf_set_str(_hgmp, str.c_str(), 10);
  _h = 0.0;
  mpf_init_set_d(_t0gmp, t0);
}

TimeDiscretisation::TimeDiscretisation(unsigned int nSteps, double t0, double T):
  _t0(t0)
{
  mpf_init(_hgmp);
  mpf_init(_tkp1); 
  mpf_init(_tk); 
  mpf_init(_t0gmp);

  _h = (T - t0) / nSteps;
}

// Copy constructor
TimeDiscretisation::TimeDiscretisation(const TimeDiscretisation& td)
{
  mpf_init(_hgmp);
  mpf_init(_tkp1);
  mpf_init(_tk);
  mpf_init(_t0gmp);

  if (td.hGmp())
  {
    mpf_init_set(_hgmp, *td.currentTimeStep());
  }
  else
  {
    if (td.hConst())
      _h = td._h;
  }
  _t0 = td.getT0();
  _tkV = td.getTkVector();
}


// --- Destructor ---
TimeDiscretisation::~TimeDiscretisation()
{
  if (!_tkV.empty())
    _tkV.clear();

  mpf_clear(_hgmp);
  mpf_clear(_tkp1);
  mpf_clear(_tk);
  mpf_clear(_t0gmp);

}

void TimeDiscretisation::setTkVector(const TkVector& newTk)
{
  _tkV.clear();
  _tkV = newTk;
}

void TimeDiscretisation::setT0(double val)
{
  _t0 = val;
  if (_h == 0.0)
    mpf_set_d(_t0gmp, val);
  if (!_tkV.empty())
    RuntimeException::selfThrow("TimeDiscretisation::setT0 must be called only when the TimeDiscretisation is with a constant h");
}

double TimeDiscretisation::currentTimeStep(const unsigned int k)
{
  if(_tkV.empty())
  {
    if (_h > 0.)
      return _h;
    else
    {
      mpf_mul_ui(_tkp1, _hgmp, k+1);
      mpf_mul_ui(_tk, _hgmp, k);
      mpf_add(_tk, _tk, _t0gmp);
      mpf_add(_tkp1, _tkp1, _t0gmp);
      return mpf_get_d(_tkp1) - mpf_get_d(_tk);
    }
  }
  else
    return _tkV.at(k+1) - _tkV.at(k);
}

double TimeDiscretisation::getTk(const unsigned int indx)
{
  if(_tkV.empty())
  {
    if (_h > 0.)
      return _t0 + _h*indx;
    else
    {
      mpf_mul_ui(_tk, _hgmp, indx);
      mpf_add(_tk, _tk, _t0gmp);
      return mpf_get_d(_tk);
    }
  }
  else
    return _tkV.at(indx);
}

// --- Other functions ---
void TimeDiscretisation::display() const
{
  std::cout << "====> Time Disretisation :" <<std::endl;
  std::cout << " the current timestep is " << _h << std::endl;
  std::cout << "====" <<std::endl;
}
