#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spawner
struct  Spawner_t534830648  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Spawner::line
	GameObject_t1756533147 * ___line_2;
	// System.Single Spawner::speed
	float ___speed_3;
	// System.Single Spawner::spawnRate
	float ___spawnRate_4;
	// System.Single Spawner::lastPos
	float ___lastPos_5;

public:
	inline static int32_t get_offset_of_line_2() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___line_2)); }
	inline GameObject_t1756533147 * get_line_2() const { return ___line_2; }
	inline GameObject_t1756533147 ** get_address_of_line_2() { return &___line_2; }
	inline void set_line_2(GameObject_t1756533147 * value)
	{
		___line_2 = value;
		Il2CppCodeGenWriteBarrier(&___line_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_spawnRate_4() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___spawnRate_4)); }
	inline float get_spawnRate_4() const { return ___spawnRate_4; }
	inline float* get_address_of_spawnRate_4() { return &___spawnRate_4; }
	inline void set_spawnRate_4(float value)
	{
		___spawnRate_4 = value;
	}

	inline static int32_t get_offset_of_lastPos_5() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___lastPos_5)); }
	inline float get_lastPos_5() const { return ___lastPos_5; }
	inline float* get_address_of_lastPos_5() { return &___lastPos_5; }
	inline void set_lastPos_5(float value)
	{
		___lastPos_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
