// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class Response;

SWIFT_CLASS("_TtC9SwiftLibs10WebRequest")
@interface WebRequest : NSObject
+ (WebRequest * __nonnull (^ __nonnull)(void))newInstance;
+ (void)setNewInstance:(WebRequest * __nonnull (^ __nonnull)(void))value;
- (void)setUrl:(NSString * __nonnull)url;
- (void)setHeaderWithHeader:(NSString * __nonnull)header value:(NSString * __nonnull)value;
- (void)setFollowRedirects:(BOOL)followRedirects;
- (void)setGetParamWithKey:(NSString * __nonnull)key value:(NSString * __nonnull)value;
- (void)setPostParamWithKey:(NSString * __nonnull)key value:(NSString * __nonnull)value;
- (void)addCookieWithKey:(NSString * __nonnull)key value:(NSString * __nullable)value;
- (void)addCookie:(NSString * __nonnull)keyValuePair;
- (void)setBody:(NSString * __nonnull)body;
- (void)execute:(void (^ __nullable)(WebRequest * __nonnull, Response * __nonnull))callback;
@end

@class Mocker;

SWIFT_CLASS("_TtC9SwiftLibs14MockWebRequest")
@interface MockWebRequest : WebRequest
@property (nonatomic, strong) Mocker * __nonnull mocker;
+ (void)mockRandomFunction:(NSInteger (^ __nullable)(void))randomFunction;
+ (void)restoreRandomFunction;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)setUrl:(NSString * __nonnull)url;
- (void)setHeaderWithHeader:(NSString * __nonnull)header value:(NSString * __nonnull)value;
- (void)setGetParamWithKey:(NSString * __nonnull)key value:(NSString * __nonnull)value;
- (void)setPostParamWithKey:(NSString * __nonnull)key value:(NSString * __nonnull)value;
- (void)setFollowRedirects:(BOOL)followRedirects;
- (void)addCookieWithKey:(NSString * __nonnull)key value:(NSString * __nullable)value;
- (void)addCookie:(NSString * __nonnull)keyValuePair;
- (void)setBody:(NSString * __nonnull)body;
- (void)execute:(void (^ __nullable)(WebRequest * __nonnull, Response * __nonnull))callback;
@end


SWIFT_CLASS("_TtC9SwiftLibs6Mocker")
@interface Mocker : NSObject
- (NSInteger)getInvocationCountFor:(NSString * __nonnull)methodName;
- (void)reset;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


#pragma clang diagnostic pop
