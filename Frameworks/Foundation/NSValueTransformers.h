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

#pragma once

#ifdef __cplusplus

#import "Foundation/NSNumber.h"
#import "Foundation/NSValue.h"

namespace woc {
template <typename T>
struct ValueTransformer {
    static id get(T) {
        static_assert(false, "ValueTransformer cannot automatically derive arbitrary type transformations.");
    }
    static id get(T* t) {
        return get(*t);
    }
    static id get(void* v) {
        return get(*static_cast<T*>(v));
    }
    static void store(id, T*) {
        static_assert(false, "ValueTransformer cannot automatically derive arbitrary type transformations.");
    }
    static void store(id value, void* data) {
        store(value, static_cast<T*>(data));
    }
};

id valueFromDataWithType(void* data, const char* objcType) {
    switch (objcType[0]) {
        case '@':
            return ValueTransformer<id>::get(data);
        case '#':
            return ValueTransformer<Class>::get(data);
        case 'c':
            return ValueTransformer<char>::get(data);
        case 'i':
            return ValueTransformer<int>::get(data);
        case 's':
            return ValueTransformer<short>::get(data);
        case 'l':
            return ValueTransformer<long>::get(data);
        case 'q':
            return ValueTransformer<long long>::get(data);
        case 'C':
            return ValueTransformer<unsigned char>::get(data);
        case 'I':
            return ValueTransformer<unsigned int>::get(data);
        case 'S':
            return ValueTransformer<unsigned short>::get(data);
        case 'L':
            return ValueTransformer<unsigned long>::get(data);
        case 'Q':
            return ValueTransformer<unsigned long long>::get(data);
        case 'f':
            return ValueTransformer<float>::get(data);
        case 'd':
            return ValueTransformer<double>::get(data);
        case 'B':
            return ValueTransformer<bool>::get(data);
    }
    return [NSValue valueWithBytes:data objCType:objcType];
}
}

template <>
id woc::ValueTransformer<id>::get(id data) {
    return data;
}
template <>
id woc::ValueTransformer<Class>::get(Class data) {
    return (id)data;
}
template <>
id woc::ValueTransformer<char>::get(char data) {
    return [NSNumber numberWithChar:data];
}
template <>
id woc::ValueTransformer<int>::get(int data) {
    return [NSNumber numberWithInt:data];
}
template <>
id woc::ValueTransformer<short>::get(short data) {
    return [NSNumber numberWithShort:data];
}
template <>
id woc::ValueTransformer<long>::get(long data) {
    return [NSNumber numberWithLong:data];
}
template <>
id woc::ValueTransformer<long long>::get(long long data) {
    return [NSNumber numberWithLongLong:data];
}
template <>
id woc::ValueTransformer<unsigned char>::get(unsigned char data) {
    return [NSNumber numberWithUnsignedChar:data];
}
template <>
id woc::ValueTransformer<unsigned int>::get(unsigned int data) {
    return [NSNumber numberWithUnsignedInt:data];
}
template <>
id woc::ValueTransformer<unsigned short>::get(unsigned short data) {
    return [NSNumber numberWithUnsignedShort:data];
}
template <>
id woc::ValueTransformer<unsigned long>::get(unsigned long data) {
    return [NSNumber numberWithUnsignedLong:data];
}
template <>
id woc::ValueTransformer<unsigned long long>::get(unsigned long long data) {
    return [NSNumber numberWithUnsignedLongLong:data];
}
template <>
id woc::ValueTransformer<float>::get(float data) {
    return [NSNumber numberWithFloat:data];
}
template <>
id woc::ValueTransformer<double>::get(double data) {
    return [NSNumber numberWithDouble:data];
}
template <>
id woc::ValueTransformer<bool>::get(bool data) {
    return [NSNumber numberWithBool:data];
}
template <>
void woc::ValueTransformer<id>::store(id value, id* data) {
    *data = value;
}
template <>
void woc::ValueTransformer<Class>::store(id value, Class* data) {
    *data = value;
}
template <>
void woc::ValueTransformer<char>::store(id value, char* data) {
    *data = [value charValue];
}
template <>
void woc::ValueTransformer<int>::store(id value, int* data) {
    *data = [value intValue];
}
template <>
void woc::ValueTransformer<short>::store(id value, short* data) {
    *data = [value shortValue];
}
template <>
void woc::ValueTransformer<long>::store(id value, long* data) {
    *data = [value longValue];
}
template <>
void woc::ValueTransformer<long long>::store(id value, long long* data) {
    *data = [value longLongValue];
}
template <>
void woc::ValueTransformer<unsigned char>::store(id value, unsigned char* data) {
    *data = [value unsignedCharValue];
}
template <>
void woc::ValueTransformer<unsigned int>::store(id value, unsigned int* data) {
    *data = [value unsignedIntValue];
}
template <>
void woc::ValueTransformer<unsigned short>::store(id value, unsigned short* data) {
    *data = [value unsignedShortValue];
}
template <>
void woc::ValueTransformer<unsigned long>::store(id value, unsigned long* data) {
    *data = [value unsignedLongValue];
}
template <>
void woc::ValueTransformer<unsigned long long>::store(id value, unsigned long long* data) {
    *data = [value unsignedLongLongValue];
}
template <>
void woc::ValueTransformer<float>::store(id value, float* data) {
    *data = [value floatValue];
}
template <>
void woc::ValueTransformer<double>::store(id value, double* data) {
    *data = [value doubleValue];
}
template <>
void woc::ValueTransformer<bool>::store(id value, bool* data) {
    *data = [value boolValue];
}

#endif
