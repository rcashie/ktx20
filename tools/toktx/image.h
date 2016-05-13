// -*- tab-width: 4; -*-
// vi: set sw=2 ts=4:

//!
//! @internal
//! @~English
//! @file image.h
//!
//! @brief Internal interface for netpbm file reader
//!
//! $Revision: 11914 $
//! $Date:: 2010-07-12 17:46:23 +0900 #$
//!

//
// Copyright (c) 2010 The Khronos Group Inc.
// 
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and/or associated documentation files (the
// "Materials"), to deal in the Materials without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Materials, and to
// permit persons to whom the Materials are furnished to do so, subject to
// the following conditions:
// 
// The above copyright notice and this permission notice shall be included
// unaltered in all copies or substantial portions of the Materials.
// Any additions, deletions, or changes to the original source files
// must be clearly indicated in accompanying documentation.
// 
// If only executable code is distributed, then the accompanying
// documentation must state that "this software is based in part on the
// work of the Khronos Group."
// 
// THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.
//

#ifndef IMAGE_H
#define IMAGE_H

enum FileResult { SUCCESS, INVALID_FORMAT, INVALID_VALUE, INVALID_PAM_HEADER,
                  INVALID_TUPLETYPE, UNEXPECTED_EOF, IO_ERROR, OUT_OF_MEMORY };

FileResult readNPBM(FILE* src, unsigned int& width, unsigned int& height,
					unsigned int& components, unsigned int& componentSize,
					unsigned int& imageSize, unsigned char*& pixels);

FileResult readPAM(FILE* src, unsigned int& width, unsigned int& height,
					unsigned int& components, unsigned int& componentSize,
					unsigned int& imageSize, unsigned char*& pixels);

FileResult readPPM(FILE* src, unsigned int& width, unsigned int& height,
					unsigned int& components, unsigned int& componentSize,
					unsigned int& imageSize, unsigned char*& pixels);

FileResult readPGM(FILE* src, unsigned int& width, unsigned int& height,
					unsigned int& components, unsigned int& componentSize,
					unsigned int& imageSize, unsigned char*& pixels);

#endif



