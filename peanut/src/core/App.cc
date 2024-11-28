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


#include "core/App.h"

namespace peanut{
    App::~App(){
        delete this;
    }

    void App::init() noexcept{
        if(this->_init_count > 0){
            return;
        }

        this->_init_count++;
        return;
    }

    std::string App::get_version() noexcept{
        return PEANUT_VERSION;
    }
}