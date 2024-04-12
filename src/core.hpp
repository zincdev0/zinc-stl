#ifndef ZINC_CORE_H_
#define ZINC_CORE_H_

using byte = unsigned char;

using i8 = signed char;
static_assert(sizeof(i8) == 1);
using i16 = signed short;
static_assert(sizeof(i16) == 2);
using i32 = signed int;
static_assert(sizeof(i32) == 4);
using i64 = signed long long;
static_assert(sizeof(i64) == 8);

using u8 = unsigned char;
static_assert(sizeof(u8) == 1);
using u16 = unsigned short;
static_assert(sizeof(u16) == 2);
using u32 = unsigned int;
static_assert(sizeof(u32) == 4);
using u64 = unsigned long long;
static_assert(sizeof(u64) == 8);
using usize = unsigned long long;
static_assert(sizeof(usize) == 8);

using f32 = float;
static_assert(sizeof(f32) == 4);
using f64 = double;
static_assert(sizeof(f64) == 8);

#endif /* ZINC_CORE_H_ */