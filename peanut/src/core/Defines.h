/* 
 * Copyright (C) 2024 Christos Vasileiou
 * 
 * This file is part of peanut.
 *
 * peanut is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * peanut is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with peanut.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef PEANUT_TYPEDEF_H_
#define PEANUT_TYPEDEF_H_

#include "Pch.h"

#define PEANUT_NO_ERR uint16_t(0)
#define PEANUT_WARNING uint16_t(1)
#define PEANUT_ERROR uint16_t(2)

#ifdef PEANUT_BUILD_TYPE_RELEASE
    #define PEANUT_VERSION "2024.1"
#else
    #define PEANUT_VERSION "2024.1-dev"
#endif

#endif // PEANUT_TYPEDEF_H_