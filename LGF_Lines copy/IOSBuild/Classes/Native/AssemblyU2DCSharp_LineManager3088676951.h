#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LineManager
struct  LineManager_t3088676951  : public MonoBehaviour_t1158329972
{
public:
	// System.Single LineManager::lineHeight
	float ___lineHeight_2;
	// System.Single LineManager::speed
	float ___speed_3;
	// System.Int32 LineManager::score
	int32_t ___score_4;

public:
	inline static int32_t get_offset_of_lineHeight_2() { return static_cast<int32_t>(offsetof(LineManager_t3088676951, ___lineHeight_2)); }
	inline float get_lineHeight_2() const { return ___lineHeight_2; }
	inline float* get_address_of_lineHeight_2() { return &___lineHeight_2; }
	inline void set_lineHeight_2(float value)
	{
		___lineHeight_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(LineManager_t3088676951, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_score_4() { return static_cast<int32_t>(offsetof(LineManager_t3088676951, ___score_4)); }
	inline int32_t get_score_4() const { return ___score_4; }
	inline int32_t* get_address_of_score_4() { return &___score_4; }
	inline void set_score_4(int32_t value)
	{
		___score_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
