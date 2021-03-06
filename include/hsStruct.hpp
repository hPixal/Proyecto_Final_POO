#pragma once

struct hsStruct{
	public:
	hsStruct(){
		
	}

	hsStruct(char name[20], int points){
		for (int i = 0; i < 20; i++)
		{
			_name[i]=name[i];
		}
		
		this->_points = points;
	}
	bool operator<(hsStruct aux){
		if (this->_points<aux._points)
		{
			return true;
		}
		return false;
	}
	bool operator>(hsStruct aux){
		if (this->_points>aux._points)
		{
			return true;
		}
		return false;
	}
	char _name[20];
	int _points;
};

/*
This file is part of Skyjump.

    Skyjump is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Skyjump is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Skyjump.  If not, see <https://www.gnu.org/licenses/>.
*/