/*
    This file is part of osm_diff_analyzer_war_room, SAX based 
    Openstreetmap diff analyzer whose aim is to detect users arrived
    in Openstreetmap Project for less than 3 Months
    Copyright (C) 2012  Julien Thevenon ( julien_thevenon at yahoo.fr )

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>
*/
#include "war_room_analyzer_description.h"

namespace osm_diff_analyzer_war_room
{
  //----------------------------------------------------------------------------
  const std::string & war_room_analyzer_description::get_input_type(void)const
  {
    return m_input_type;
  }

  //----------------------------------------------------------------------------
  const std::string & war_room_analyzer_description::get_output_type(void)const
  {
    return m_output_type;
  }

  //----------------------------------------------------------------------------
  const std::string & war_room_analyzer_description::get_type(void)const
  {
    return m_type;
  }

  const std::string war_room_analyzer_description::m_input_type = "sax";
  const std::string war_room_analyzer_description::m_output_type = "";
  const std::string war_room_analyzer_description::m_type = "war_room";

}
//EOF
