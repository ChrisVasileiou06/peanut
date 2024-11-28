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


#ifndef PEANUT_APP_H_
#define PEANUT_APP_H_

#include "Pch.h"

#include "core/Defines.h"

namespace peanut{
    class App{
    public:
        App() = default;

        ~App();

        void init() noexcept;

        std::string get_version() noexcept;

    private:
        uint8_t _init_count = 0;
    };
}

#endif // PEANUT_APP_H_