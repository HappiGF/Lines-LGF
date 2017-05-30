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
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Score
struct  Score_t1518975274  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Score::player
	GameObject_t1756533147 * ___player_2;
	// System.Int32 Score::score
	int32_t ___score_3;
	// UnityEngine.UI.Text Score::scoreText
	Text_t356221433 * ___scoreText_4;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_score_3() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___score_3)); }
	inline int32_t get_score_3() const { return ___score_3; }
	inline int32_t* get_address_of_score_3() { return &___score_3; }
	inline void set_score_3(int32_t value)
	{
		___score_3 = value;
	}

	inline static int32_t get_offset_of_scoreText_4() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___scoreText_4)); }
	inline Text_t356221433 * get_scoreText_4() const { return ___scoreText_4; }
	inline Text_t356221433 ** get_address_of_scoreText_4() { return &___scoreText_4; }
	inline void set_scoreText_4(Text_t356221433 * value)
	{
		___scoreText_4 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
