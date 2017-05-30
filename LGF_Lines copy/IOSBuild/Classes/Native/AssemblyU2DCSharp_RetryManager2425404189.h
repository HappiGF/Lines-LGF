#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RetryManager
struct  RetryManager_t2425404189  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 RetryManager::score
	int32_t ___score_2;
	// System.Int32 RetryManager::highScore
	int32_t ___highScore_3;
	// UnityEngine.UI.Text RetryManager::ScoreText
	Text_t356221433 * ___ScoreText_4;
	// UnityEngine.UI.Text RetryManager::HighScoreText
	Text_t356221433 * ___HighScoreText_5;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(RetryManager_t2425404189, ___score_2)); }
	inline int32_t get_score_2() const { return ___score_2; }
	inline int32_t* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(int32_t value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_highScore_3() { return static_cast<int32_t>(offsetof(RetryManager_t2425404189, ___highScore_3)); }
	inline int32_t get_highScore_3() const { return ___highScore_3; }
	inline int32_t* get_address_of_highScore_3() { return &___highScore_3; }
	inline void set_highScore_3(int32_t value)
	{
		___highScore_3 = value;
	}

	inline static int32_t get_offset_of_ScoreText_4() { return static_cast<int32_t>(offsetof(RetryManager_t2425404189, ___ScoreText_4)); }
	inline Text_t356221433 * get_ScoreText_4() const { return ___ScoreText_4; }
	inline Text_t356221433 ** get_address_of_ScoreText_4() { return &___ScoreText_4; }
	inline void set_ScoreText_4(Text_t356221433 * value)
	{
		___ScoreText_4 = value;
		Il2CppCodeGenWriteBarrier(&___ScoreText_4, value);
	}

	inline static int32_t get_offset_of_HighScoreText_5() { return static_cast<int32_t>(offsetof(RetryManager_t2425404189, ___HighScoreText_5)); }
	inline Text_t356221433 * get_HighScoreText_5() const { return ___HighScoreText_5; }
	inline Text_t356221433 ** get_address_of_HighScoreText_5() { return &___HighScoreText_5; }
	inline void set_HighScoreText_5(Text_t356221433 * value)
	{
		___HighScoreText_5 = value;
		Il2CppCodeGenWriteBarrier(&___HighScoreText_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
