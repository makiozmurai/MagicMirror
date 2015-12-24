//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BCEdgePaddings {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct BCPixel {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct FBBezierCurveData {
    struct CGPoint endPoint1;
    struct CGPoint controlPoint1;
    struct CGPoint controlPoint2;
    struct CGPoint endPoint2;
    char isStraightLine;
    char looksLikeStraightLine;
    double length;
    struct CGRect bounds;
    char isPoint;
    struct CGRect boundingRect;
};

struct FBBezierCurveLocation {
    double _field1;
    double _field2;
};

struct FBRange {
    double minimum;
    double maximum;
};

struct FSRef {
    unsigned char _field1[80];
};

struct MSModelObject {
    Class _field1;
};

struct MSPresetIteratorStruct {
    long long _field1;
    long long _field2;
    long long _field3;
};

struct MSShapeClickInfo {
    long long _field1;
    long long _field2;
    long long _field3;
};

struct NSBezierElement {
    unsigned long long _field1;
    struct CGPoint _field2;
    struct CGPoint _field3[2];
};

struct _CHTransformStruct {
    double _field1;
    char _field2;
    char _field3;
    char _field4;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct addrinfo {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    unsigned int _field5;
    char *_field6;
    struct sockaddr *_field7;
    struct addrinfo *_field8;
};

struct sockaddr;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
} CDStruct_f4b747e6;

typedef struct {
    unsigned long long numberOfRows;
    unsigned long long numberOfColumns;
    long long horizontalPadding;
    long long verticalPadding;
    long long boxedHeight;
    long long boxedWidth;
    char isBoxed;
    char hasHorizontalPadding;
    char hasVerticalPadding;
    char skipFillingHoles;
    char shouldRenameLayers;
} CDStruct_24ee45cf;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    char *_field1;
    unsigned int _field2;
    char *_field3;
    char *_field4;
} CDStruct_5b5d1a5d;

typedef struct {
    char _field1;
    char _field2;
} CDStruct_7ddbbeae;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
} CDStruct_8727d297;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    long long _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
} CDStruct_e097db04;
