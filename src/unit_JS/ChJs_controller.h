//
// PROJECT CHRONO - http://projectchrono.org
//
// Copyright (c) 2010 Alessandro Tasora
// All rights reserved.
//
// Use of this source code is governed by a BSD-style license that can be 
// found in the LICENSE file at the top level of the distribution
// and at http://projectchrono.org/license-chrono.txt.
//

#ifndef CHJSCONTROLLER_H
#define CHJSCONTROLLER_H

///////////////////////////////////////////////////
//  
//   ChJs_controller.h
//
//	 CHRONO 
//   ------
//   Multibody dinamics engine
//
//   define JS wrapper class
//
// ------------------------------------------------
//             www.deltaknowledge.com
// ------------------------------------------------
///////////////////////////////////////////////////


#include "jsapi.h"

namespace chrono 
{


// CLASSES

extern JSClass chjs_ChControllerPID; 

 

// Initiates the class 
// Returns created 'class object'. Object 'parent' can 
// be null if no inheritance desired, or other class if inheritance
// hierarchy must be built.
 
JSObject* ChJS_InitClass_ChControllerPID(JSContext* cx, JSObject* glob, JSObject* parent);


} // END_OF_NAMESPACE____

#endif
