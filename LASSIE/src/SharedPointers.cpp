/*******************************************************************************
 *
 *  File Name     : SharedPointers.cpp
 *  Date created  : May.17 2010
 *  Authors       : Ming-ching Chiu, Sever Tipei
 *  Organization  : Music School, University of Illinois at Urbana Champaign
 *  Description   : This file contains the of class "SharedPointers" of 
 *                  LASSIE. Each SharedPointer holds the pointers to important
 *                  objects so that can be accessed by other objects easily.
 *
 *==============================================================================
 *
 *  This file is part of LASSIE.
 *  2010 Ming-ching Chiu, Sever Tipei
 *
 *
 *  LASSIE is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  LASSIE is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with LASSIE.  If not, see <http://www.gnu.org/licenses/>.
 *
 ******************************************************************************/

#include "SharedPointers.h"

#include "MainWindow.h"
#include "ProjectViewController.h"
#include "PaletteViewController.h"

SharedPointers::SharedPointers(){
  mainWindow= NULL;
  paletteView = NULL;
  projectView = NULL;
  projectTreeView = NULL;
  eventAttributesView = NULL;
}
SharedPointers::~SharedPointers(){}
