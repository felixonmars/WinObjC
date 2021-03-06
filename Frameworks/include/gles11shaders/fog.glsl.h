//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#ifndef FOG_GLSL_H
#define FOG_GLSL_H

static const unsigned char fog_glsl[] = {
    0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x5f, 0x47, 0x4c, 
    0x5f, 0x4c, 0x49, 0x4e, 0x45, 0x41, 0x52, 0x20, 0x30, 0x78, 0x32, 0x36, 
    0x30, 0x31, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x5f, 
    0x47, 0x4c, 0x5f, 0x45, 0x58, 0x50, 0x20, 0x30, 0x78, 0x30, 0x38, 0x30, 
    0x30, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x5f, 0x47, 
    0x4c, 0x5f, 0x45, 0x58, 0x50, 0x32, 0x20, 0x30, 0x78, 0x30, 0x38, 0x30, 
    0x31, 0x0a, 0x0a, 0x23, 0x69, 0x66, 0x20, 0x21, 0x64, 0x65, 0x66, 0x69, 
    0x6e, 0x65, 0x64, 0x28, 0x46, 0x4f, 0x47, 0x5f, 0x4d, 0x4f, 0x44, 0x45, 
    0x29, 0x0a, 0x09, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x46, 
    0x4f, 0x47, 0x5f, 0x4d, 0x4f, 0x44, 0x45, 0x20, 0x2d, 0x31, 0x0a, 0x23, 
    0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a, 0x2f, 0x2f, 0x20, 0x55, 0x6e, 
    0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 
    0x72, 0x6d, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x75, 0x5f, 0x66, 0x6f, 0x67, 
    0x4d, 0x6f, 0x64, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 
    0x6d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x75, 0x5f, 0x66, 0x6f, 
    0x67, 0x44, 0x65, 0x6e, 0x73, 0x69, 0x74, 0x79, 0x3b, 0x0a, 0x75, 0x6e, 
    0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 
    0x75, 0x5f, 0x66, 0x6f, 0x67, 0x53, 0x74, 0x61, 0x72, 0x74, 0x3b, 0x0a, 
    0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 
    0x74, 0x20, 0x75, 0x5f, 0x66, 0x6f, 0x67, 0x45, 0x6e, 0x64, 0x3b, 0x0a, 
    0x0a, 0x2f, 0x2f, 0x20, 0x46, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 
    0x73, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x63, 0x61, 0x6c, 0x63, 
    0x46, 0x6f, 0x67, 0x4c, 0x69, 0x6e, 0x65, 0x61, 0x72, 0x28, 0x66, 0x6c, 
    0x6f, 0x61, 0x74, 0x20, 0x64, 0x69, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 
    0x54, 0x6f, 0x45, 0x79, 0x65, 0x29, 0x3b, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 
    0x74, 0x20, 0x63, 0x61, 0x6c, 0x63, 0x46, 0x6f, 0x67, 0x45, 0x78, 0x70, 
    0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x64, 0x69, 0x73, 0x74, 0x61, 
    0x6e, 0x63, 0x65, 0x54, 0x6f, 0x45, 0x79, 0x65, 0x29, 0x3b, 0x0a, 0x66, 
    0x6c, 0x6f, 0x61, 0x74, 0x20, 0x63, 0x61, 0x6c, 0x63, 0x46, 0x6f, 0x67, 
    0x45, 0x78, 0x70, 0x32, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x64, 
    0x69, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x54, 0x6f, 0x45, 0x79, 0x65, 
    0x29, 0x3b, 0x0a, 0x0a, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x63, 
    0x61, 0x6c, 0x63, 0x46, 0x6f, 0x67, 0x46, 0x61, 0x63, 0x74, 0x6f, 0x72, 
    0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x64, 0x69, 0x73, 0x74, 0x61, 
    0x6e, 0x63, 0x65, 0x54, 0x6f, 0x45, 0x79, 0x65, 0x29, 0x0a, 0x7b, 0x0a, 
    0x09, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x66, 0x6f, 0x67, 0x46, 0x61, 
    0x63, 0x74, 0x6f, 0x72, 0x3b, 0x0a, 0x23, 0x69, 0x66, 0x20, 0x46, 0x4f, 
    0x47, 0x5f, 0x4d, 0x4f, 0x44, 0x45, 0x20, 0x3d, 0x3d, 0x20, 0x5f, 0x47, 
    0x4c, 0x5f, 0x4c, 0x49, 0x4e, 0x45, 0x41, 0x52, 0x0a, 0x09, 0x66, 0x6f, 
    0x67, 0x46, 0x61, 0x63, 0x74, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x63, 0x61, 
    0x6c, 0x63, 0x46, 0x6f, 0x67, 0x4c, 0x69, 0x6e, 0x65, 0x61, 0x72, 0x28, 
    0x64, 0x69, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x54, 0x6f, 0x45, 0x79, 
    0x65, 0x29, 0x3b, 0x0a, 0x23, 0x65, 0x6c, 0x69, 0x66, 0x20, 0x46, 0x4f, 
    0x47, 0x5f, 0x4d, 0x4f, 0x44, 0x45, 0x20, 0x3d, 0x3d, 0x20, 0x5f, 0x47, 
    0x4c, 0x5f, 0x45, 0x58, 0x50, 0x0a, 0x09, 0x66, 0x6f, 0x67, 0x46, 0x61, 
    0x63, 0x74, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x63, 0x61, 0x6c, 0x63, 0x46, 
    0x6f, 0x67, 0x45, 0x78, 0x70, 0x28, 0x64, 0x69, 0x73, 0x74, 0x61, 0x6e, 
    0x63, 0x65, 0x54, 0x6f, 0x45, 0x79, 0x65, 0x29, 0x3b, 0x0a, 0x23, 0x65, 
    0x6c, 0x69, 0x66, 0x20, 0x46, 0x4f, 0x47, 0x5f, 0x4d, 0x4f, 0x44, 0x45, 
    0x20, 0x3d, 0x3d, 0x20, 0x5f, 0x47, 0x4c, 0x5f, 0x45, 0x58, 0x50, 0x32, 
    0x0a, 0x09, 0x66, 0x6f, 0x67, 0x46, 0x61, 0x63, 0x74, 0x6f, 0x72, 0x20, 
    0x3d, 0x20, 0x63, 0x61, 0x6c, 0x63, 0x46, 0x6f, 0x67, 0x45, 0x78, 0x70, 
    0x32, 0x28, 0x64, 0x69, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x54, 0x6f, 
    0x45, 0x79, 0x65, 0x29, 0x3b, 0x0a, 0x23, 0x65, 0x6c, 0x69, 0x66, 0x20, 
    0x46, 0x4f, 0x47, 0x5f, 0x4d, 0x4f, 0x44, 0x45, 0x20, 0x3d, 0x3d, 0x20, 
    0x2d, 0x31, 0x0a, 0x09, 0x69, 0x66, 0x20, 0x28, 0x75, 0x5f, 0x66, 0x6f, 
    0x67, 0x4d, 0x6f, 0x64, 0x65, 0x20, 0x3d, 0x3d, 0x20, 0x5f, 0x47, 0x4c, 
    0x5f, 0x4c, 0x49, 0x4e, 0x45, 0x41, 0x52, 0x29, 0x20, 0x7b, 0x0a, 0x09, 
    0x09, 0x66, 0x6f, 0x67, 0x46, 0x61, 0x63, 0x74, 0x6f, 0x72, 0x20, 0x3d, 
    0x20, 0x63, 0x61, 0x6c, 0x63, 0x46, 0x6f, 0x67, 0x4c, 0x69, 0x6e, 0x65, 
    0x61, 0x72, 0x28, 0x64, 0x69, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x54, 
    0x6f, 0x45, 0x79, 0x65, 0x29, 0x3b, 0x0a, 0x09, 0x7d, 0x20, 0x65, 0x6c, 
    0x73, 0x65, 0x20, 0x69, 0x66, 0x20, 0x28, 0x75, 0x5f, 0x66, 0x6f, 0x67, 
    0x4d, 0x6f, 0x64, 0x65, 0x20, 0x3d, 0x3d, 0x20, 0x5f, 0x47, 0x4c, 0x5f, 
    0x45, 0x58, 0x50, 0x29, 0x20, 0x7b, 0x0a, 0x09, 0x09, 0x66, 0x6f, 0x67, 
    0x46, 0x61, 0x63, 0x74, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x63, 0x61, 0x6c, 
    0x63, 0x46, 0x6f, 0x67, 0x45, 0x78, 0x70, 0x28, 0x64, 0x69, 0x73, 0x74, 
    0x61, 0x6e, 0x63, 0x65, 0x54, 0x6f, 0x45, 0x79, 0x65, 0x29, 0x3b, 0x0a, 
    0x09, 0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x09, 0x09, 
    0x66, 0x6f, 0x67, 0x46, 0x61, 0x63, 0x74, 0x6f, 0x72, 0x20, 0x3d, 0x20, 
    0x63, 0x61, 0x6c, 0x63, 0x46, 0x6f, 0x67, 0x45, 0x78, 0x70, 0x32, 0x28, 
    0x64, 0x69, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x54, 0x6f, 0x45, 0x79, 
    0x65, 0x29, 0x3b, 0x0a, 0x09, 0x7d, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 
    0x66, 0x0a, 0x09, 0x0a, 0x09, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 
    0x66, 0x6f, 0x67, 0x46, 0x61, 0x63, 0x74, 0x6f, 0x72, 0x3b, 0x0a, 0x7d, 
    0x0a, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x63, 0x61, 0x6c, 0x63, 
    0x46, 0x6f, 0x67, 0x4c, 0x69, 0x6e, 0x65, 0x61, 0x72, 0x28, 0x66, 0x6c, 
    0x6f, 0x61, 0x74, 0x20, 0x64, 0x69, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 
    0x54, 0x6f, 0x45, 0x79, 0x65, 0x29, 0x0a, 0x7b, 0x0a, 0x09, 0x66, 0x6c, 
    0x6f, 0x61, 0x74, 0x20, 0x66, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x66, 
    0x6f, 0x67, 0x45, 0x6e, 0x64, 0x20, 0x2d, 0x20, 0x64, 0x69, 0x73, 0x74, 
    0x61, 0x6e, 0x63, 0x65, 0x54, 0x6f, 0x45, 0x79, 0x65, 0x29, 0x20, 0x2f, 
    0x20, 0x28, 0x75, 0x5f, 0x66, 0x6f, 0x67, 0x45, 0x6e, 0x64, 0x20, 0x2d, 
    0x20, 0x75, 0x5f, 0x66, 0x6f, 0x67, 0x53, 0x74, 0x61, 0x72, 0x74, 0x29, 
    0x3b, 0x0a, 0x09, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x63, 0x6c, 
    0x61, 0x6d, 0x70, 0x28, 0x66, 0x2c, 0x20, 0x63, 0x5f, 0x7a, 0x65, 0x72, 
    0x6f, 0x66, 0x2c, 0x20, 0x63, 0x5f, 0x6f, 0x6e, 0x65, 0x66, 0x29, 0x3b, 
    0x0a, 0x7d, 0x0a, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x63, 0x61, 
    0x6c, 0x63, 0x46, 0x6f, 0x67, 0x45, 0x78, 0x70, 0x28, 0x66, 0x6c, 0x6f, 
    0x61, 0x74, 0x20, 0x64, 0x69, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x54, 
    0x6f, 0x45, 0x79, 0x65, 0x29, 0x0a, 0x7b, 0x0a, 0x09, 0x66, 0x6c, 0x6f, 
    0x61, 0x74, 0x20, 0x66, 0x20, 0x3d, 0x20, 0x65, 0x78, 0x70, 0x28, 0x2d, 
    0x28, 0x64, 0x69, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x54, 0x6f, 0x45, 
    0x79, 0x65, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x66, 0x6f, 0x67, 0x44, 0x65, 
    0x6e, 0x73, 0x69, 0x74, 0x79, 0x29, 0x29, 0x3b, 0x0a, 0x09, 0x72, 0x65, 
    0x74, 0x75, 0x72, 0x6e, 0x20, 0x63, 0x6c, 0x61, 0x6d, 0x70, 0x28, 0x66, 
    0x2c, 0x20, 0x63, 0x5f, 0x7a, 0x65, 0x72, 0x6f, 0x66, 0x2c, 0x20, 0x63, 
    0x5f, 0x6f, 0x6e, 0x65, 0x66, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x66, 
    0x6c, 0x6f, 0x61, 0x74, 0x20, 0x63, 0x61, 0x6c, 0x63, 0x46, 0x6f, 0x67, 
    0x45, 0x78, 0x70, 0x32, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x64, 
    0x69, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x54, 0x6f, 0x45, 0x79, 0x65, 
    0x29, 0x0a, 0x7b, 0x0a, 0x09, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x66, 
    0x20, 0x3d, 0x20, 0x64, 0x69, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x54, 
    0x6f, 0x45, 0x79, 0x65, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x66, 0x6f, 0x67, 
    0x44, 0x65, 0x6e, 0x73, 0x69, 0x74, 0x79, 0x3b, 0x0a, 0x09, 0x66, 0x20, 
    0x3d, 0x20, 0x65, 0x78, 0x70, 0x28, 0x2d, 0x28, 0x66, 0x2a, 0x66, 0x29, 
    0x29, 0x3b, 0x0a, 0x09, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x63, 
    0x6c, 0x61, 0x6d, 0x70, 0x28, 0x66, 0x2c, 0x20, 0x63, 0x5f, 0x7a, 0x65, 
    0x72, 0x6f, 0x66, 0x2c, 0x20, 0x63, 0x5f, 0x6f, 0x6e, 0x65, 0x66, 0x29, 
    0x3b, 0x0a, 0x7d, 0x0a
};

#endif
