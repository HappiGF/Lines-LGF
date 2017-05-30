#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerManager
struct  PlayerManager_t1596653588  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerManager::speed
	float ___speed_2;
	// System.Int32 PlayerManager::radius
	int32_t ___radius_3;
	// UnityEngine.Vector2 PlayerManager::center
	Vector2_t2243707579  ___center_4;
	// System.Single PlayerManager::angle
	float ___angle_5;
	// System.Single PlayerManager::distance
	float ___distance_6;
	// System.Int32 PlayerManager::score
	int32_t ___score_7;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_radius_3() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___radius_3)); }
	inline int32_t get_radius_3() const { return ___radius_3; }
	inline int32_t* get_address_of_radius_3() { return &___radius_3; }
	inline void set_radius_3(int32_t value)
	{
		___radius_3 = value;
	}

	inline static int32_t get_offset_of_center_4() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___center_4)); }
	inline Vector2_t2243707579  get_center_4() const { return ___center_4; }
	inline Vector2_t2243707579 * get_address_of_center_4() { return &___center_4; }
	inline void set_center_4(Vector2_t2243707579  value)
	{
		___center_4 = value;
	}

	inline static int32_t get_offset_of_angle_5() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___angle_5)); }
	inline float get_angle_5() const { return ___angle_5; }
	inline float* get_address_of_angle_5() { return &___angle_5; }
	inline void set_angle_5(float value)
	{
		___angle_5 = value;
	}

	inline static int32_t get_offset_of_distance_6() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___distance_6)); }
	inline float get_distance_6() const { return ___distance_6; }
	inline float* get_address_of_distance_6() { return &___distance_6; }
	inline void set_distance_6(float value)
	{
		___distance_6 = value;
	}

	inline static int32_t get_offset_of_score_7() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___score_7)); }
	inline int32_t get_score_7() const { return ___score_7; }
	inline int32_t* get_address_of_score_7() { return &___score_7; }
	inline void set_score_7(int32_t value)
	{
		___score_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
