#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.LineRenderer
struct LineRenderer_t849157671;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CircleCreator
struct  CircleCreator_t1130840400  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CircleCreator::ThetaScale
	float ___ThetaScale_2;
	// System.Single CircleCreator::radius
	float ___radius_3;
	// System.Int32 CircleCreator::Size
	int32_t ___Size_4;
	// UnityEngine.LineRenderer CircleCreator::LineDrawer
	LineRenderer_t849157671 * ___LineDrawer_5;
	// System.Single CircleCreator::Theta
	float ___Theta_6;

public:
	inline static int32_t get_offset_of_ThetaScale_2() { return static_cast<int32_t>(offsetof(CircleCreator_t1130840400, ___ThetaScale_2)); }
	inline float get_ThetaScale_2() const { return ___ThetaScale_2; }
	inline float* get_address_of_ThetaScale_2() { return &___ThetaScale_2; }
	inline void set_ThetaScale_2(float value)
	{
		___ThetaScale_2 = value;
	}

	inline static int32_t get_offset_of_radius_3() { return static_cast<int32_t>(offsetof(CircleCreator_t1130840400, ___radius_3)); }
	inline float get_radius_3() const { return ___radius_3; }
	inline float* get_address_of_radius_3() { return &___radius_3; }
	inline void set_radius_3(float value)
	{
		___radius_3 = value;
	}

	inline static int32_t get_offset_of_Size_4() { return static_cast<int32_t>(offsetof(CircleCreator_t1130840400, ___Size_4)); }
	inline int32_t get_Size_4() const { return ___Size_4; }
	inline int32_t* get_address_of_Size_4() { return &___Size_4; }
	inline void set_Size_4(int32_t value)
	{
		___Size_4 = value;
	}

	inline static int32_t get_offset_of_LineDrawer_5() { return static_cast<int32_t>(offsetof(CircleCreator_t1130840400, ___LineDrawer_5)); }
	inline LineRenderer_t849157671 * get_LineDrawer_5() const { return ___LineDrawer_5; }
	inline LineRenderer_t849157671 ** get_address_of_LineDrawer_5() { return &___LineDrawer_5; }
	inline void set_LineDrawer_5(LineRenderer_t849157671 * value)
	{
		___LineDrawer_5 = value;
		Il2CppCodeGenWriteBarrier(&___LineDrawer_5, value);
	}

	inline static int32_t get_offset_of_Theta_6() { return static_cast<int32_t>(offsetof(CircleCreator_t1130840400, ___Theta_6)); }
	inline float get_Theta_6() const { return ___Theta_6; }
	inline float* get_address_of_Theta_6() { return &___Theta_6; }
	inline void set_Theta_6(float value)
	{
		___Theta_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
