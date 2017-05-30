#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_CircleCreator1130840400.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_LineRenderer849157671.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "AssemblyU2DCSharp_LineManager3088676951.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_Spawner534830648.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "AssemblyU2DCSharp_PlayerManager1596653588.h"
#include "AssemblyU2DCSharp_MenuManager314201098.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Touch407273883.h"
#include "AssemblyU2DCSharp_RetryManager2425404189.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "AssemblyU2DCSharp_Score1518975274.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// CircleCreator
struct CircleCreator_t1130840400;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// System.Object
struct Il2CppObject;
// LineManager
struct LineManager_t3088676951;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// Spawner
struct Spawner_t534830648;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.Collider
struct Collider_t3497673348;
// PlayerManager
struct PlayerManager_t1596653588;
// MenuManager
struct MenuManager_t314201098;
// UnityEngine.Touch[]
struct TouchU5BU5D_t3887265178;
// RetryManager
struct RetryManager_t2425404189;
// Score
struct Score_t1518975274;
// UnityEngine.UI.Text
struct Text_t356221433;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisLineRenderer_t849157671_m1483127559_MethodInfo_var;
extern const uint32_t CircleCreator_Start_m467460033_MetadataUsageId;
extern const MethodInfo* GameObject_GetComponent_TisSpawner_t534830648_m4133130283_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral702741440;
extern const uint32_t LineManager_Start_m1870195932_MetadataUsageId;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t LineManager_Update_m3280493411_MetadataUsageId;
extern const MethodInfo* GameObject_GetComponent_TisPlayerManager_t1596653588_m2637066999_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1875862075;
extern Il2CppCodeGenString* _stringLiteral2247053792;
extern Il2CppCodeGenString* _stringLiteral479196852;
extern const uint32_t LineManager_OnTriggerEnter_m676384892_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3131029212;
extern const uint32_t MenuManager_Start_m1891747599_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral797252775;
extern const uint32_t MenuManager_PlayOnClick_m3239870228_MetadataUsageId;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral372029370;
extern Il2CppCodeGenString* _stringLiteral372029373;
extern const uint32_t PlayerManager_Update_m2677707154_MetadataUsageId;
extern const uint32_t PlayerManager_RotateClockwise_m1765205704_MetadataUsageId;
extern const uint32_t PlayerManager_RotateCClockwise_m3742322589_MetadataUsageId;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral483507026;
extern const uint32_t RetryManager_Start_m2878279580_MetadataUsageId;
extern const uint32_t RetryManager_ReplayOnClick_m3061120266_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisText_t356221433_m1342661039_MethodInfo_var;
extern const uint32_t Score_Start_m1559619439_MetadataUsageId;
extern const uint32_t Score_Update_m3052312664_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral4182922915;
extern Il2CppCodeGenString* _stringLiteral2258304637;
extern Il2CppCodeGenString* _stringLiteral639110131;
extern const uint32_t Spawner_Start_m3183106495_MetadataUsageId;
extern const uint32_t Spawner_IncreaseSpeed_m2030419964_MetadataUsageId;
extern const uint32_t Spawner_IncreaseRepeatRate_m3954094086_MetadataUsageId;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var;
extern const uint32_t Spawner_Spawn_m3882275040_MetadataUsageId;

// UnityEngine.Touch[]
struct TouchU5BU5D_t3887265178  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Touch_t407273883  m_Items[1];

public:
	inline Touch_t407273883  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t407273883 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t407273883  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t407273883  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t407273883 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t407273883  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m3829784634_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Vector3_t2243707580  p1, Quaternion_t4030073918  p2, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
#define Component_GetComponent_TisLineRenderer_t849157671_m1483127559(__this, method) ((  LineRenderer_t849157671 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void UnityEngine.LineRenderer::SetVertexCount(System.Int32)
extern "C"  void LineRenderer_SetVertexCount_m2685086340 (LineRenderer_t849157671 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2638739322 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
extern "C"  void LineRenderer_SetPosition_m4048451705 (LineRenderer_t849157671 * __this, int32_t p0, Vector3_t2243707580  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1756533147 * GameObject_Find_m836511350 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Spawner>()
#define GameObject_GetComponent_TisSpawner_t534830648_m4133130283(__this, method) ((  Spawner_t534830648 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m694320887 (Il2CppObject * __this /* static, unused */, int32_t p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2884721203 (Il2CppObject * __this /* static, unused */, float p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m909382139 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m2325460848 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C"  Vector3_t2243707580  Vector3_get_down_m2372302126 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m2233168104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  Vector3_op_Multiply_m1351554733 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
extern "C"  void Transform_Translate_m3316827744 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m4145850038 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<PlayerManager>()
#define GameObject_GetComponent_TisPlayerManager_t1596653588_m2637066999(__this, method) ((  PlayerManager_t1596653588 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
extern "C"  void PlayerPrefs_SetInt_m3351928596 (Il2CppObject * __this /* static, unused */, String_t* p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1619949821 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
extern "C"  bool PlayerPrefs_HasKey_m1212656251 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2243707579  Vector2_op_Implicit_m1064335535 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(System.String)
extern "C"  bool Input_GetKey_m1856484952 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerManager::RotateClockwise()
extern "C"  void PlayerManager_RotateClockwise_m1765205704 (PlayerManager_t1596653588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerManager::RotateCClockwise()
extern "C"  void PlayerManager_RotateCClockwise_m3742322589 (PlayerManager_t1596653588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C"  int32_t Input_get_touchCount_m2050827666 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
extern "C"  TouchU5BU5D_t3887265178* Input_get_touches_m388011594 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C"  Touch_t407273883  Input_GetTouch_m1463942798 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C"  Vector2_t2243707579  Touch_get_position_m2079703643 (Touch_t407273883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3067419446 (Vector2_t2243707579 * __this, float p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2243707579  Vector2_op_Multiply_m4236139442 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  Vector2_op_Addition_m1389598521 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  p0, Vector2_t2243707579  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t2243707580  Vector2_op_Implicit_m176791411 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2469242620 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
extern "C"  int32_t PlayerPrefs_GetInt_m2889062785 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m56707527 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t356221433_m1342661039(__this, method) ((  Text_t356221433 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C"  void MonoBehaviour_InvokeRepeating_m3468262484 (MonoBehaviour_t1158329972 * __this, String_t* p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
extern "C"  void MonoBehaviour_CancelInvoke_m2508161963 (MonoBehaviour_t1158329972 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t4030073918  Transform_get_rotation_m1033555130 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1756533147_m3064851704(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1756533147 * (*) (Il2CppObject * /* static, unused */, GameObject_t1756533147 *, Vector3_t2243707580 , Quaternion_t4030073918 , const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CircleCreator::.ctor()
extern "C"  void CircleCreator__ctor_m1109312185 (CircleCreator_t1130840400 * __this, const MethodInfo* method)
{
	{
		__this->set_ThetaScale_2((0.01f));
		__this->set_radius_3((3.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CircleCreator::Start()
extern "C"  void CircleCreator_Start_m467460033 (CircleCreator_t1130840400 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CircleCreator_Start_m467460033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		LineRenderer_t849157671 * L_0 = Component_GetComponent_TisLineRenderer_t849157671_m1483127559(__this, /*hidden argument*/Component_GetComponent_TisLineRenderer_t849157671_m1483127559_MethodInfo_var);
		__this->set_LineDrawer_5(L_0);
		__this->set_Theta_6((0.0f));
		float L_1 = __this->get_ThetaScale_2();
		__this->set_Size_4((((int32_t)((int32_t)((float)((float)((float)((float)(1.0f)/(float)L_1))+(float)(1.0f)))))));
		LineRenderer_t849157671 * L_2 = __this->get_LineDrawer_5();
		int32_t L_3 = __this->get_Size_4();
		NullCheck(L_2);
		LineRenderer_SetVertexCount_m2685086340(L_2, L_3, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_00a3;
	}

IL_0048:
	{
		float L_4 = __this->get_Theta_6();
		float L_5 = __this->get_ThetaScale_2();
		__this->set_Theta_6(((float)((float)L_4+(float)((float)((float)(6.28318548f)*(float)L_5)))));
		float L_6 = __this->get_radius_3();
		float L_7 = __this->get_Theta_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_8 = cosf(L_7);
		V_1 = ((float)((float)L_6*(float)L_8));
		float L_9 = __this->get_radius_3();
		float L_10 = __this->get_Theta_6();
		float L_11 = sinf(L_10);
		V_2 = ((float)((float)L_9*(float)L_11));
		LineRenderer_t849157671 * L_12 = __this->get_LineDrawer_5();
		int32_t L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_2;
		Vector3_t2243707580  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m2638739322(&L_16, L_14, L_15, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		LineRenderer_SetPosition_m4048451705(L_12, L_13, L_16, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		V_0 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_00a3:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = __this->get_Size_4();
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0048;
		}
	}
	{
		return;
	}
}
// System.Void LineManager::.ctor()
extern "C"  void LineManager__ctor_m3827477120 (LineManager_t3088676951 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LineManager::Start()
extern "C"  void LineManager_Start_m1870195932 (LineManager_t3088676951 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LineManager_Start_m1870195932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral702741440, /*hidden argument*/NULL);
		NullCheck(L_0);
		Spawner_t534830648 * L_1 = GameObject_GetComponent_TisSpawner_t534830648_m4133130283(L_0, /*hidden argument*/GameObject_GetComponent_TisSpawner_t534830648_m4133130283_MethodInfo_var);
		NullCheck(L_1);
		float L_2 = L_1->get_speed_3();
		__this->set_speed_3(L_2);
		return;
	}
}
// System.Void LineManager::Awake()
extern "C"  void LineManager_Awake_m3609271463 (LineManager_t3088676951 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Random_Range_m694320887(NULL /*static, unused*/, 1, ((int32_t)100), /*hidden argument*/NULL);
		V_0 = L_0;
		__this->set_lineHeight_2((0.0f));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)90))))
		{
			goto IL_0036;
		}
	}
	{
		float L_2 = Random_Range_m2884721203(NULL /*static, unused*/, (3.0f), (5.0f), /*hidden argument*/NULL);
		__this->set_lineHeight_2(L_2);
		goto IL_006d;
	}

IL_0036:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)45))))
		{
			goto IL_0058;
		}
	}
	{
		float L_4 = Random_Range_m2884721203(NULL /*static, unused*/, (2.0f), (3.0f), /*hidden argument*/NULL);
		__this->set_lineHeight_2(L_4);
		goto IL_006d;
	}

IL_0058:
	{
		float L_5 = Random_Range_m2884721203(NULL /*static, unused*/, (0.5f), (1.9f), /*hidden argument*/NULL);
		__this->set_lineHeight_2(L_5);
	}

IL_006d:
	{
		GameObject_t1756533147 * L_6 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_t3275118058 * L_7 = GameObject_get_transform_m909382139(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_lineHeight_2();
		Vector3_t2243707580  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m2638739322(&L_9, (0.1f), L_8, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localScale_m2325460848(L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LineManager::Update()
extern "C"  void LineManager_Update_m3280493411 (LineManager_t3088676951 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LineManager_Update_m3280493411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		GameObject_t1756533147 * L_0 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral702741440, /*hidden argument*/NULL);
		NullCheck(L_0);
		Spawner_t534830648 * L_1 = GameObject_GetComponent_TisSpawner_t534830648_m4133130283(L_0, /*hidden argument*/GameObject_GetComponent_TisSpawner_t534830648_m4133130283_MethodInfo_var);
		NullCheck(L_1);
		float L_2 = L_1->get_speed_3();
		__this->set_speed_3(L_2);
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_t3275118058 * L_4 = GameObject_get_transform_m909382139(L_3, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Vector3_get_down_m2372302126(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_7 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_speed_3();
		Vector3_t2243707580  L_9 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_Translate_m3316827744(L_4, L_9, /*hidden argument*/NULL);
		Transform_t3275118058 * L_10 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t2243707580  L_11 = Transform_get_position_m1104419803(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		float L_12 = (&V_0)->get_y_2();
		if ((!(((float)L_12) < ((float)(-7.0f)))))
		{
			goto IL_006c;
		}
	}
	{
		GameObject_t1756533147 * L_13 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_006c:
	{
		return;
	}
}
// System.Void LineManager::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void LineManager_OnTriggerEnter_m676384892 (LineManager_t3088676951 * __this, Collider_t3497673348 * ___player0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LineManager_OnTriggerEnter_m676384892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t3497673348 * L_0 = ___player0;
		NullCheck(L_0);
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_2 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral1875862075, /*hidden argument*/NULL);
		NullCheck(L_2);
		PlayerManager_t1596653588 * L_3 = GameObject_GetComponent_TisPlayerManager_t1596653588_m2637066999(L_2, /*hidden argument*/GameObject_GetComponent_TisPlayerManager_t1596653588_m2637066999_MethodInfo_var);
		NullCheck(L_3);
		int32_t L_4 = L_3->get_score_7();
		__this->set_score_4(L_4);
		int32_t L_5 = __this->get_score_4();
		PlayerPrefs_SetInt_m3351928596(NULL /*static, unused*/, _stringLiteral2247053792, L_5, /*hidden argument*/NULL);
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral479196852, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuManager::.ctor()
extern "C"  void MenuManager__ctor_m573957227 (MenuManager_t314201098 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuManager::Start()
extern "C"  void MenuManager_Start_m1891747599 (MenuManager_t314201098 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_Start_m1891747599_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayerPrefs_HasKey_m1212656251(NULL /*static, unused*/, _stringLiteral3131029212, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		PlayerPrefs_SetInt_m3351928596(NULL /*static, unused*/, _stringLiteral3131029212, 0, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void MenuManager::PlayOnClick()
extern "C"  void MenuManager_PlayOnClick_m3239870228 (MenuManager_t314201098 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_PlayOnClick_m3239870228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral797252775, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerManager::.ctor()
extern "C"  void PlayerManager__ctor_m2438461151 (PlayerManager_t1596653588 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerManager::Start()
extern "C"  void PlayerManager_Start_m3761560539 (PlayerManager_t1596653588 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		Vector2_t2243707579  L_2 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_center_4(L_2);
		__this->set_distance_6((0.0f));
		__this->set_score_7(0);
		return;
	}
}
// System.Void PlayerManager::Update()
extern "C"  void PlayerManager_Update_m2677707154 (PlayerManager_t1596653588 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerManager_Update_m2677707154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t407273883  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2243707579  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m1856484952(NULL /*static, unused*/, _stringLiteral372029370, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		PlayerManager_RotateClockwise_m1765205704(__this, /*hidden argument*/NULL);
		goto IL_002f;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKey_m1856484952(NULL /*static, unused*/, _stringLiteral372029373, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		PlayerManager_RotateCClockwise_m3742322589(__this, /*hidden argument*/NULL);
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		int32_t L_2 = Input_get_touchCount_m2050827666(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		TouchU5BU5D_t3887265178* L_3 = Input_get_touches_m388011594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Touch_t407273883  L_4 = Input_GetTouch_m1463942798(NULL /*static, unused*/, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_3)->max_length))))-(int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_4;
		Vector2_t2243707579  L_5 = Touch_get_position_m2079703643((&V_0), /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = (&V_1)->get_x_0();
		if ((!(((float)L_6) > ((float)(720.0f)))))
		{
			goto IL_006d;
		}
	}
	{
		PlayerManager_RotateClockwise_m1765205704(__this, /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_006d:
	{
		PlayerManager_RotateCClockwise_m3742322589(__this, /*hidden argument*/NULL);
	}

IL_0073:
	{
		float L_7 = __this->get_distance_6();
		if ((!(((float)L_7) >= ((float)(3.1f)))))
		{
			goto IL_00a1;
		}
	}
	{
		__this->set_distance_6((-0.04f));
		int32_t L_8 = __this->get_score_7();
		__this->set_score_7(((int32_t)((int32_t)L_8+(int32_t)1)));
		goto IL_00ca;
	}

IL_00a1:
	{
		float L_9 = __this->get_distance_6();
		if ((!(((float)L_9) <= ((float)(-3.1f)))))
		{
			goto IL_00ca;
		}
	}
	{
		__this->set_distance_6((0.04f));
		int32_t L_10 = __this->get_score_7();
		__this->set_score_7(((int32_t)((int32_t)L_10+(int32_t)1)));
	}

IL_00ca:
	{
		return;
	}
}
// System.Void PlayerManager::RotateClockwise()
extern "C"  void PlayerManager_RotateClockwise_m1765205704 (PlayerManager_t1596653588 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerManager_RotateClockwise_m1765205704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = __this->get_angle_5();
		float L_1 = __this->get_speed_2();
		float L_2 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_angle_5(((float)((float)L_0+(float)((float)((float)L_1*(float)L_2)))));
		float L_3 = __this->get_angle_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_4 = sinf(L_3);
		float L_5 = __this->get_angle_5();
		float L_6 = cosf(L_5);
		Vector2_t2243707579  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2__ctor_m3067419446(&L_7, L_4, L_6, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_radius_3();
		Vector2_t2243707579  L_9 = Vector2_op_Multiply_m4236139442(NULL /*static, unused*/, L_7, (((float)((float)L_8))), /*hidden argument*/NULL);
		V_0 = L_9;
		Transform_t3275118058 * L_10 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector2_t2243707579  L_11 = __this->get_center_4();
		Vector2_t2243707579  L_12 = V_0;
		Vector2_t2243707579  L_13 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		Vector3_t2243707580  L_14 = Vector2_op_Implicit_m176791411(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_m2469242620(L_10, L_14, /*hidden argument*/NULL);
		float L_15 = __this->get_distance_6();
		float L_16 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_distance_6(((float)((float)L_15+(float)L_16)));
		return;
	}
}
// System.Void PlayerManager::RotateCClockwise()
extern "C"  void PlayerManager_RotateCClockwise_m3742322589 (PlayerManager_t1596653588 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerManager_RotateCClockwise_m3742322589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = __this->get_angle_5();
		float L_1 = __this->get_speed_2();
		float L_2 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_angle_5(((float)((float)L_0+(float)((float)((float)((float)((float)L_1*(float)L_2))*(float)(-1.0f))))));
		float L_3 = __this->get_angle_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_4 = sinf(L_3);
		float L_5 = __this->get_angle_5();
		float L_6 = cosf(L_5);
		Vector2_t2243707579  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2__ctor_m3067419446(&L_7, L_4, L_6, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_radius_3();
		Vector2_t2243707579  L_9 = Vector2_op_Multiply_m4236139442(NULL /*static, unused*/, L_7, (((float)((float)L_8))), /*hidden argument*/NULL);
		V_0 = L_9;
		Transform_t3275118058 * L_10 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector2_t2243707579  L_11 = __this->get_center_4();
		Vector2_t2243707579  L_12 = V_0;
		Vector2_t2243707579  L_13 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		Vector3_t2243707580  L_14 = Vector2_op_Implicit_m176791411(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_m2469242620(L_10, L_14, /*hidden argument*/NULL);
		float L_15 = __this->get_distance_6();
		float L_16 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_distance_6(((float)((float)L_15-(float)L_16)));
		return;
	}
}
// System.Void RetryManager::.ctor()
extern "C"  void RetryManager__ctor_m1382801740 (RetryManager_t2425404189 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RetryManager::Start()
extern "C"  void RetryManager_Start_m2878279580 (RetryManager_t2425404189 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RetryManager_Start_m2878279580_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = PlayerPrefs_GetInt_m2889062785(NULL /*static, unused*/, _stringLiteral3131029212, /*hidden argument*/NULL);
		__this->set_highScore_3(L_0);
		int32_t L_1 = PlayerPrefs_GetInt_m2889062785(NULL /*static, unused*/, _stringLiteral2247053792, /*hidden argument*/NULL);
		__this->set_score_2(L_1);
		Text_t356221433 * L_2 = __this->get_ScoreText_4();
		int32_t L_3 = __this->get_score_2();
		int32_t L_4 = L_3;
		Il2CppObject * L_5 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		String_t* L_7 = String_Concat_m56707527(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_7);
		int32_t L_8 = __this->get_score_2();
		int32_t L_9 = __this->get_highScore_3();
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_10 = __this->get_score_2();
		__this->set_highScore_3(L_10);
	}

IL_005d:
	{
		Text_t356221433 * L_11 = __this->get_HighScoreText_5();
		int32_t L_12 = __this->get_highScore_3();
		int32_t L_13 = L_12;
		Il2CppObject * L_14 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral483507026, L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_15);
		int32_t L_16 = __this->get_highScore_3();
		PlayerPrefs_SetInt_m3351928596(NULL /*static, unused*/, _stringLiteral3131029212, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RetryManager::ReplayOnClick()
extern "C"  void RetryManager_ReplayOnClick_m3061120266 (RetryManager_t2425404189 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RetryManager_ReplayOnClick_m3061120266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral797252775, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Score::.ctor()
extern "C"  void Score__ctor_m797864275 (Score_t1518975274 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Score::Start()
extern "C"  void Score_Start_m1559619439 (Score_t1518975274 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score_Start_m1559619439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral1875862075, /*hidden argument*/NULL);
		__this->set_player_2(L_0);
		Text_t356221433 * L_1 = Component_GetComponent_TisText_t356221433_m1342661039(__this, /*hidden argument*/Component_GetComponent_TisText_t356221433_m1342661039_MethodInfo_var);
		__this->set_scoreText_4(L_1);
		return;
	}
}
// System.Void Score::Update()
extern "C"  void Score_Update_m3052312664 (Score_t1518975274 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score_Update_m3052312664_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = __this->get_player_2();
		NullCheck(L_0);
		PlayerManager_t1596653588 * L_1 = GameObject_GetComponent_TisPlayerManager_t1596653588_m2637066999(L_0, /*hidden argument*/GameObject_GetComponent_TisPlayerManager_t1596653588_m2637066999_MethodInfo_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->get_score_7();
		__this->set_score_3(L_2);
		Text_t356221433 * L_3 = __this->get_scoreText_4();
		int32_t L_4 = __this->get_score_3();
		int32_t L_5 = L_4;
		Il2CppObject * L_6 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		String_t* L_8 = String_Concat_m56707527(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_8);
		return;
	}
}
// System.Void Spawner::.ctor()
extern "C"  void Spawner__ctor_m1860016179 (Spawner_t534830648 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spawner::Start()
extern "C"  void Spawner_Start_m3183106495 (Spawner_t534830648 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Spawner_Start_m3183106495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_speed_3((3.5f));
		__this->set_spawnRate_4((0.5f));
		__this->set_lastPos_5((0.0f));
		float L_0 = __this->get_spawnRate_4();
		MonoBehaviour_InvokeRepeating_m3468262484(__this, _stringLiteral4182922915, (1.0f), L_0, /*hidden argument*/NULL);
		MonoBehaviour_InvokeRepeating_m3468262484(__this, _stringLiteral2258304637, (30.0f), (30.0f), /*hidden argument*/NULL);
		MonoBehaviour_InvokeRepeating_m3468262484(__this, _stringLiteral639110131, (10.0f), (10.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spawner::IncreaseSpeed()
extern "C"  void Spawner_IncreaseSpeed_m2030419964 (Spawner_t534830648 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Spawner_IncreaseSpeed_m2030419964_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_speed_3();
		if ((!(((double)(((double)((double)L_0)))) > ((double)(6.5)))))
		{
			goto IL_0025;
		}
	}
	{
		MonoBehaviour_CancelInvoke_m2508161963(__this, _stringLiteral639110131, /*hidden argument*/NULL);
		goto IL_0037;
	}

IL_0025:
	{
		float L_1 = __this->get_speed_3();
		__this->set_speed_3(((float)((float)L_1+(float)(0.2f))));
	}

IL_0037:
	{
		return;
	}
}
// System.Void Spawner::IncreaseRepeatRate()
extern "C"  void Spawner_IncreaseRepeatRate_m3954094086 (Spawner_t534830648 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Spawner_IncreaseRepeatRate_m3954094086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_spawnRate_4();
		__this->set_spawnRate_4(((float)((float)L_0-(float)(0.025f))));
		MonoBehaviour_CancelInvoke_m2508161963(__this, _stringLiteral4182922915, /*hidden argument*/NULL);
		float L_1 = __this->get_spawnRate_4();
		MonoBehaviour_InvokeRepeating_m3468262484(__this, _stringLiteral4182922915, (0.0f), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spawner::Spawn()
extern "C"  void Spawner_Spawn_m3882275040 (Spawner_t534830648 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Spawner_Spawn_m3882275040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = Random_Range_m2884721203(NULL /*static, unused*/, (-2.4f), (2.3f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0025;
	}

IL_0015:
	{
		float L_1 = Random_Range_m2884721203(NULL /*static, unused*/, (-2.4f), (2.3f), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0025:
	{
		float L_2 = V_0;
		float L_3 = __this->get_lastPos_5();
		if ((!(((double)(((double)((double)L_2)))) >= ((double)((double)((double)(((double)((double)L_3)))-(double)(0.4)))))))
		{
			goto IL_0055;
		}
	}
	{
		float L_4 = V_0;
		float L_5 = __this->get_lastPos_5();
		if ((((double)(((double)((double)L_4)))) <= ((double)((double)((double)(((double)((double)L_5)))+(double)(0.4))))))
		{
			goto IL_0015;
		}
	}

IL_0055:
	{
		GameObject_t1756533147 * L_6 = __this->get_line_2();
		float L_7 = V_0;
		Vector3_t2243707580  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m2638739322(&L_8, L_7, (10.0f), (0.5f), /*hidden argument*/NULL);
		Transform_t3275118058 * L_9 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Quaternion_t4030073918  L_10 = Transform_get_rotation_m1033555130(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_6, L_8, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		float L_11 = V_0;
		__this->set_lastPos_5(L_11);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
