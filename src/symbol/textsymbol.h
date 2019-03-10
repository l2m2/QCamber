/**
 * @file   textsymbol.h
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

#ifndef TEXTSYMBOL_H
#define TEXTSYMBOL_H

#include "symbol.h"

#include <QtGui>

#include "featuresparser.h"
#include "record.h"

class TextSymbol: public Symbol {
public:
  TextSymbol(const TextRecord* rec);

  virtual QString infoText(void);
  virtual QString longInfoText(void);
  virtual QPainterPath painterPath(void);

protected:
  qreal m_x, m_y;
  QString m_font;
  Orient m_orient;
  qreal m_xsize, m_ysize;
  qreal m_width_factor;
  QString m_text;
  int m_version;
};

#endif /* TEXTSYMBOL_H */
