/**
 * @file   rectangularthermalsymbol.h
 * @author Wei-Ning Huang (AZ) <aitjcize@gmail.com>
 *
 * Copyright (C) 2012 - 2014 Wei-Ning Huang (AZ) <aitjcize@gmail.com>
 * All Rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef RECTANGULARTHERMALSYMBOL_H
#define RECTANGULARTHERMALSYMBOL_H

#include "symbol.h"

class RectangularThermalSymbol: public Symbol {
public:

  RectangularThermalSymbol(const QString& def, const Polarity& polarity,
      const AttribData& attrib);

  virtual QPainterPath painterPath(void);

protected:

private:
  QString m_def;
  qreal m_w;
  qreal m_h;
  qreal m_angle;
  int m_num_spokes;
  qreal m_gap;
  qreal m_air_gap;

  inline int sign(qreal val) {
    return (val >= 0) + (val < 0) * (-1);
  }
};

#endif /* RECTANGULARTHERMALSYMBOL_H */
